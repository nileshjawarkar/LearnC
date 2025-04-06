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
int add(int num1, int num2) {
    return (num1 + num2);
}
```

Above function perform addition of 2 numbers and return the result. 
Here ..
- add : Name of function
- num1 & num2 : Are the arguments of type int. Argument is the information passed to function.
- return int, addition of num1 and num2

Some times function do not return anything. In such case
return type of function should be void. Lets see one example -

``` c 
void sayHelloTo(char[] person) {
    printf("Hello %s\n", person);
}
```

## Call a function

``` c 
#include <stdio.h>

int add(int num1, int num2) {
    return (num1 + num2);
}

void sayHelloTo(char[] name) {
    printf("Hello %s\n", name);
}

int main() {
    int v1 = add(10, 20);
    int v2 = add(13, 25);

    printf("v1 = %d, v2 = %d\n", v1, v2);

    char person[] = "Mr. Tom";
    sayHelloTo(person);
}
```
