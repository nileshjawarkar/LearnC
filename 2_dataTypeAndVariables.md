# Learn C language : data type and variables

## Lets discuss about variables using following example

``` variables_ex1.c
#include <stdio.h>

int main()
{
    int age = 24;
    float pi = 3.14;
    char ch = 'A';
    double price = 255.11;

    printf("Age = %d, pi = %f, ch = %c, price = %lf\n", age, pi, ch, price);
}
```

Line "int age = 24;" defines a variable. Basically almost all computer programs
manipulate some type of that data and variable is used to hold it. So we can think of variable 
as a some type of container which hold the data. And data-type (in this case int) tells which 
type of data it holds.

In previous section, we seen int, float, char, double in the list of keywords. 
These are the basic data-types supported by C.

- int : Integer - used for numbers
- char : used character data.
- float : used of numbers with floating point.
- double :Bigger floating point numbers

In addition to above, one which is very commonly used is void which indicate nothing/not-known.

``` c 
int age = 24;
char ch = 'A';
float pi = 3.14;
double price = 255.11;
```

We can read above lines as 
- age is variable which holds data of integer type and it hold is number value 24.
- pi is a variable which hold data of floating type and it holds value 3.14.
- ch is a variable which hold character data and it hold character value 'A'.

## Format specifier
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

## Variable modification

``` varibales_ex2.c
#include <stdio.h>

int main()
{
    int num = 24;
    printf("Before modification - num = %d\n", num);
    num = num + 11;
    printf("After modification - num = %d\n", num);
}
```

Above program initialize num to 24
```
int num = 24;
```
then it is incremented by 11. Here increment mean increasing the existing value of variable by 11.

```
num = num + 11;

# Here num already has value of 24, so above expression become as follows -
num = 24 + 11;
num = 35:
# Now num has value of 35
```

## Constant

Constant is similar to variable, but as name suggest its a constant 
and it value can not be changed.

``` varibales_ex3.c
#include <stdio.h>

int main()
{
    const float pi = 3.14;
    pi = pi + 1.0; // This is not allowed. compiler will show error.
}
```
## sizeof operator

``` variables_ex4.c
#include <stdio.h>

int main()
{
    int age = 24;
    float pi = 3.14;
    char ch = 'A';
    printf("int size = %lu, float size = %lu, ch size = %lu\n", sizeof(age), sizeof(pi), sizeof(ch));
}
```

Just note the format specifier used. This is because sizeof return (unsigned long int) type data and
format specifier of it is "%lu"
We will discuss this in next section.

## Data type modifiers
There are basically four types of modifiers for all data types used in C language. 
We use these along with all the basic data types for categorising them further.

- short
    - small variant of type
- long
    - large variant of type
- unsigned
    - It means, data type is only for positive values. 
- signed 
    - It means (+,-) data-type support positive and negative values.
    - Its a default modifier and dodnt not need to be specified.

Note that signed and unsigned modifiers will not affect size of variable but it affected the range 
of values it stores. Basically unsigned variant of type will store large rage of positive values.
Let try and apply these modifiers to int and check their sizes

``` variables_ex5.c
#include <stdio.h>

int main()
{
    //-- As signed it default. We should read it as signed int i1 = 10;
    int i1 = -10; 
    short int i2 = 10;
    long int i3 = -20; 
    //-- long int is same as long. So we can simple used long as a shot form.
    //-- So i3 and i4 are same
    long i4 = 20; 
    unsigned int i5 = 10; 
    unsigned long i6 = 10; 

    printf("size of int = %lu and unsigned int = %lu\n", sizeof(i1), sizeof(i5));
    printf("size of short int = %lu\n", sizeof(i2));
    printf("size of long int = %lu\n", sizeof(i3));
    printf("size of long = %lu and unsigned long = %lu\n", sizeof(i4), sizeof(i6));
}
```
## Range of Values of C Data Type (*Table data need correction)

|Data Type|Format Specifier|Range|Typical Bit Size|
|---|---|-----|---|
| unsigned char | %c | 0 to 255 | 8 |
|char|%c|-127 to 127|8|
| int|%d, %i|-32,767 to 32,767|32|
| unsigned int|%u| 0 to 65,535|32|
|short int|%hd|-32,767 to 32,767|16|
|unsigned short int|%hu|0 to 65,535|16|
|long int|%ld, %li|-2,147,483,647 to 2,147,483,647|64|
|unsigned long int|%lu|0 to 4,294,967,295|64|
|float|%f|1E-37 to 1E+37 along with six digits of the precisions here|32|
|double|%lf|1E-37 to 1E+37 along with six digits of the precisions here|64|
|long double|%Lf|1E-37 to 1E+37 along with six digits of the precisions here|80|

## Memory size units

sizeof returns size value as bytes. 

**Small unit to large unit:**
bits -> bytes -> kilo bytes -> mega bytes -> giga bytes.

|Small Unit| Big Unit|
|-|-|
|8 Bits|-> 1 Byte|
|1024 Byets|-> 1 KB|
|1024 KB|-> 1 MB|
|1020 MB| -> 1 GB|

## How to calculate int/long range based on bit size?

Min value = (-2 ^ (X-1))
Max value = (2 ^ (X-1) - 1)

Note - ^ is power operator

Consider size of int is 32 bit, so
Min value = (-2 ^ (32-1)) =  -2147483648
Max value = (2 ^ (32-1) - 1) = 2147483647

**Please note that, this is not applicable to float/double values. Their range will be calculated using
IEEE 754 standard**


