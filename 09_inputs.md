# Learn C language : Basic user inputs


Till now use used some fixed values in our program. But
C provides many functions that help us to take inputs from user.

## scanf

We already used  printf() to output/print values.
To get user input, we can use the scanf() function

### Number Input
``` c  
#include <stdio.h>

int main() {
    //-- Read number
    int num = 0;
    printf("Enter a number = ");
    scanf("%d", &num);
    printf("You entered number = %d\n", num);
    return 0;
}

```

### String input (without spaces)

``` c 
#include <stdio.h>

int main() {
  char fullName[30];
  printf("Type your full name (max len = 30): ");
  scanf("%s", fullName);
  printf("Hello %s", fullName);
  return 0;
}
```

## fgets

In above program, if we gave input "tom jerry". It is printing
only "tom". This is limitation of scanf, it consider space as a end of input.
In such cases we can use "fgets", which uses new line ("\n") as a terminating char.

``` c 

#include <stdio.h>

int main() {
    char fullName[30];
    printf("Type your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s", fullName);
    return 0;
}
```

fgets function accepts 3 arguments as input
1) Where we want to store the input value - In above example, its fullName array.
2) Max length of the input. In above case, it length of fullName array.
3) From where we want to read the input. In this case we are using "stdin".

When we run C program, operating system provide us with 3 IO devices ...
1) stdin - Standard input
2) stdout - Standard output
3) stderr - Standard error

As we are executing program on terminal, all of these currently points to terminal.
While using scanf as well, it is reading from terminal. But in scanf case stdin is default value and not need 
to be specified.

## Exercises -

1) Cube of a number - Write a program
    - which takes a number as input
    - calculate its cude and
    - print it on the screen.
2) Table for a number - Write a program
    - which takes a number as input
    - and calculate its table. 
    - for example if 15 given as input, it will print
      15 30 45 ... 150 (all 10 numbers)
3) Sum of even numbers - Write a program
    - which takes max number or limit as input, 
    - then calculate sum of even numbers less than that limit.
    - and print it on the screen.
1) Sum and Average of 10 Numbers - Write a program 
    - which takes 10 number as input using scanf
    - Then calculate sum and average of them
    - and then print it.

      
