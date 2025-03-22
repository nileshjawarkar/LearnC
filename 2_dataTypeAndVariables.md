# Learn C language : data type and variables

## Example

``` c  
#include <stdio.h>

int main()
{
    int age = 24;
    float pi = 3.14;
    char ch = 'A';

    printf("Age = %d, pi = %f, ch = %c\n", age, pi, ch);
}
```

Line "int age = 24;" defines a variable. Basically almost all computer programs
manipulate some type of that data and variable is used to hold it. So we can think of variable 
as a some type of container which hold the data. And data-type (in this case int) tells which 
type of data it holds.

In previous section, we seen int, float, char in the list of keywords. These are data-types.
- int : Integer - used for numbers
- float : used of numbers with floating point.
- char : used character data.

``` c 
int age = 24;
float pi = 3.14;
char ch = 'A';
```

We can read above lines as 
- age is variable which holds data of integer type and it hold is number value 24.
- pi is a variable which hold data of floating type and it holds value 3.14.
- ch is a variable which hold character data and it hold character value 'A'.

``` c 
printf("Age = %d, pi = %f, ch = %c\n", age, pi, ch);
```

This printf function prints values of the variables to console.
And it uses format specifier to print those values.
- %d is used to print integer value
- %f is used to print floating value
- %c is used to print character value

and

"\n" is new-line character. Which is used to add new line after values we print.

## Escape sequences

The purpose of the escape sequence is to represent the characters that cannot be used normally using the keyboard
The table below lists some common escape sequences in C language - 
- \n	New Line - It moves the cursor to the start of the next line.
- \t	Horizontal Tab - It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
- \b	Backspace - It is used to move the cursor one place backward.
- \r	Carriage Return - It moves the cursor to the start of the current line.
- \f	Form Feed - It is used to move the cursor to the start of the next logical page.
- \a	Alarm or BeepI - It is used to generate a bell sound in the C program.

Outoff above list "\n" and "\t" are commonly used.
