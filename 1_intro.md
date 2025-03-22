# Learn C language : Introduction

## Hello world

``` examples/intro.c
#include <stdio.h>

int main()
{
    printf("Welcome to C\n");
}
```

- #include is a directive that includes a header. Header is a file that has declaration 
    of the functions. In this case we included "stdio.h" header which contains 
    declaration of "printf".
- main is a entry point of program. When program execution requested, OS looks of entry point
    from where it can start execution. For C program, its main.
- main is a special function which acts as a entry point. We will discuss about function in coming sections.
- printf is a function which prints requested string/characters to the console.
- In this program, it will print "Welcome to C" to the console.


## What is computer language

Human use language to communicate with each other. This communication basically is for 
- expressing their thoughts or feeling. 
- giving instructions to someone about certain task.

In case of computer, its communication between human and computer (which is nothing but a smart machine).
Intention of their communication, is that human what's computer to perform certain task. So basically
this communication is type of instuctive.

Now as human language uses different words to communicate, similarly computer also has the words which
we can use to communicate with them. The words which computer understand is called its instruction set.
Now to communicate with them we need use that instruction set, but problem is that its in binary format.

Binary format means following type of values -
- 10100011011
- 11000011000

For human brain, interpreting these values is difficult. So writing instructions for computer is also 
very difficult. To overcome this problem, computer scientist invented various computer languages which 
include C. These languages allow humans to write instauctions in human readable format. But then these 
instruction are converted to machine code (code that uses computers binary instructions.) using the tools
provided by that particular language.

In case of C, we call it compiler. It is the tool that converts C program to machine code.

## Keyword in C

As human languages uses specific words for comunication, in similar way computer language uses 
certain set of words. 

Following are the words (which also called as keywords) used by C -

| Keyword|Keyword|Keyword|Keyword|
|---|---|---|---|
| auto|break|case|char|
| const|continue|default|do|
| double|else|enum|extern|
| float|for|goto|if|
| int|long|register|return|
| short|signed|sizeof	|static |
| struct|switch|typedef|union  |
| unsigned|void|volatile|while  |


## C syntax

We can use above words to write instructions (commonly called as code), but with certain rule.
This is similar to human languages, their we call these rules as grammer.

In comming sections, we will lean the use of above keywords and rules to use them.

## Now lets compile above program and executed it

Note that many vender provide compiler of C language. But here we are using
"GNU gcc" and "zig"

- Compile using gcc
``` sh
gcc examples/intro.c -o examples/intro
```
Above command will compile intro.c program in examples directory and also 
it will generated intro executable in examples directory. -o indicate output.

- Compile using zig
``` sh
zig cc examples/intro.c -o examples/intro
```

- Execute executable intro (or intro.exe on windows)

``` sh
./examples/intro

# output

Welcome to C

```







