# Learn C language : Functions

- A function is a block of code which perform certain task and runs only when it is called. 
- When calling the function, we can pass data to function known as parameters.
- Functions allow to define the code once, and use it many times. So it promoted re-usabilty of code.

From start, we are using function. Yes I am talkng about
*int main()*. Yes it is a function, but it is special function.
main function work as a entry point of the program we write. Entry point
from where operating system start executing our program.

**Syntax -**

``` txt
<return type> function_name(<arg_tye> arg1,...) {
    //-- function body - List of statements to
    //-- perform the task.
    return <value>;
}
```

**Example -**

``` c 
//-- Example 1: function that takes nothing as input and return  nothing.
void sayHello() {
    printf("Hello sir!");
}

//-- Example 2: function that takes 1 argument as input and return nothing.
void sayHelloTo(char[] person) {
    printf("Hello %s\n", person);
}

//-- Example 3: function that takes 2 argument as input and return int value as result.
int add(int num1, int num2) {
    return (num1 + num2);
}

```
In example 1, function with name sayHello, takes zero arguments as input and
returns void. It means nothing. This just prints **Hello sir!** on the terminal.

In example 2, function with name sayHelloTo, takes 1 string/charactor array as argument and
returns void/nothing. This function just print **Hello Nilesh\n** as output, if **Nilesh** string 
given as a input.

In example 3, function "add" perform addition of 2 numbers and return the result. 
This function takes 2 numbers as input arguments (num1 & num2) and return addition these
2 numbers as result.

## Call a function

``` c 
#include <stdio.h>

void sayHello() {
    printf("Hello sir!\n");
}
void sayHelloTo(char name[]) {
    printf("Hello %s\n", name);
}
int add(int num1, int num2) {
    return (num1 + num2);
}

int main() {
    sayHello();

    char person[] = "Mr. Tom";
    sayHelloTo(person);

    int v1 = add(10, 20);
    int v2 = add(13, 25);
    printf("v1 = %d, v2 = %d\n", v1, v2);
    return 0;
}
```

**Output :**

``` sh
Hello sir!
Hello Mr. Tom
v1 = 30, v2 = 38
```
