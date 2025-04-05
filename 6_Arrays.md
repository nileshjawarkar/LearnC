# Learn C language : Arrays

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

Syntax :
``` txt
dataType arrayName[arraySize];

Example -
int marks[10]; // This will create array variable which can hold 10 integer values.
```


## int array

``` c 
#include <stdio.h>

int main() {
  //-- Define a variable holds 10 values
  int marks[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
  //-- print values using another loop
  for (int i = 0; i < 10; i++) {
        printf("marks[%d] = %d\n", i, marks[ i ]);
  }
  return 0;
}
```

In above program, we initialized array during it declaration. 
If we initialize array during its declaration, then their providing size of array 
is optional.

But when we declare array and initialize it later. In such cases, it is
manadatory to provide array size. Following example demostrate that case.

``` c 

#include <stdio.h>

int main() {
  //-- Define a variable to hold 10 values
  int marks[10];
  //-- We can use loop to initialize its values
  for (int i = 0; i < 10; i++) {
        marks[ i ] = (i + 1) * 10;
  }

  //-- print values using another loop
  for (int i = 0; i < 10; i++) {
        printf("marks[%d] = %d\n", i, marks[ i ]);
  }
  return 0;
}
```

## Strings

String is nothing but array of characters.

``` c 
#include <stdio.h>

int main()
{
    char name[] = { 'N', 'i', 'l', 'e', 's', 'h'};
    printf("Your name = %s\n", name);

    char fullName[] = "Nilesh Jawarkar";
    printf("Your fullname = %s\n", fullName);
    return 0;
}
```
In above example, we initialize char array (string) in 2 ways.
1) Array type initialization -
    char name[] = { 'N', 'i', 'l', 'e', 's', 'h'};
2) String type initialization -
    char fullName[] = "Nilesh Jawarkar";




