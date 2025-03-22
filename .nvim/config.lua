-- This is neovim project configuration file
-- Please check version of gdb. 
-- DAP is supported by gdb version 1.14 on-wards
local sys = require("core.util.sys")
local root_path = sys.path_builder(sys.get_cwd()):append(""):build()

local function dap_setup()
    local dap = require('dap')
    dap.adapters.gdb = {
        id = 'gdb',
        type = 'executable',
        command = 'gdb',
        args = { '--quiet', '--interpreter=dap' },
    }

    local function find_executable()
        local path = vim.fn.input({
            prompt = 'Path to executable: ',
            default = root_path,
            completion = 'file',
        })
        return (path and path ~= '') and path or dap.ABORT
    end

    dap.configurations.c = {
        {
            name = "Launch executable (GDB)",
            type = "gdb",
            request = "launch",
            program = find_executable,
            cwd = root_path,
            stopAtEntry = true,
        }, {
            name = 'Launch exe with arguments (GDB)',
            type = 'gdb',
            request = 'launch',
            program = find_executable,
            args = function()
                local args_str = vim.fn.input({
                    prompt = 'Arguments: ',
                })
                return vim.split(args_str, ' +')
            end,
        }, {
            name = 'Attach to process (GDB)',
            type = 'gdb',
            request = 'attach',
            processId = require('dap.utils').pick_process,
        },
    }
    dap.configurations.cpp = dap.configurations.c
    dap.configurations.zig = dap.configurations.c
    dap.configurations.rust = dap.configurations.c
end

return {
    dap_setup = dap_setup,
}
