# Learn C language : Comparison Operators and conditional statements 

## Conditional statements
- Conditional statements are also known as decision-making statements.
- They allow a program to execute different blocks of code based on whether a condition 
is true or false. So basicaly they controls the flow of execution.
- Conditions are defined using the Comparison operators.
- The main conditional statements are if, if-else and the switch statement. 

## Comparison operators

- Less than operator (<) 
- Greator than operator (>) 
- Equality operator (==)
- Gretor than or equal to (>=) 
- Less than or equal to (<=)
- Not-equal to operator (!=)

## If statement

``` txt
if (test expression) {
   // code
}
```

If expression inside the parenthesis () evaluates to true,
then statements inside the body of if are executed.
If epression is evaluated to false, 
then statements inside the body of if are **not** executed


### Example of if 
``` c 
int main() {
    int num = 11;

    //-- double equal to : check for equality
    if( num == 11) {
        printf("num is equal to 11");
    }

    //-- Less than operator: Check if number is less than 
    //-- given value in this case 20.
    if(num < 20) {
        printf("num is less than 20");
    }

    //-- Greator than operator: Check if number is greator than
    //-- given value (in this case 5).
    if(num > 5) {
        printf("num is greater than 5");
    }

    //-- Less than or equal to operator: Check if value in num is less than or 
    //-- equal to the given number (in this case 11).
    if(num <= 11) {
        printf("num is less than or equal to 11");
    }

    //-- Greator than or equal to operator: Check if value in num is greater than or
    //-- equal to the given number (in this case 11).
    if(num >= 11) {
        printf("num is greater than or equal to 11");
    }

    //-- Not equal to operator: Check if values is not equal to the given number.
    if(num != 5) {
        printf("num is not equal to 5");
    }
}
```

## if-else statement
``` txt
if (test expression) {
   // body of if
} else {
   // body of else
}
```

If expression inside the parenthesis () evaluates to true,
then statements inside the body of if are executed.
If epression is evaluated to false, 
then statements inside else body are executed


### Example of if-else
``` cond_ifelse.c
#include <stdio.h>
int main() {
    int age = 18;
    //-- Check if age is greater than or equal to 18,
    if( age >= 18) {
        //-- if condition "age >= 18) evaluates to true, then
        //-- this bloc will get executed.
        printf("Your are eligible for votting");
    } else {
        //-- else when condition evaluates to false, this bloc will get executed.
        printf("Please wait for %d years", 18 - age);
    }
}
```
### Example of nested if-else
``` cond_ifelseif.c
#include <stdio.h>

int main()
{
    int mark_percent = 80;
    //-- Check if marks are less than or equal to 40. If condition 
    //-- evaluated to true then first code blow will get executed.
    //-- But "mark_percent <= 40" is evaluated to false as (80 is not less or even equal to 40)
    if(mark_percent <= 40) {
        printf("You failed. You can do it, just put some more effort.");

    //-- if 1st condition fails, then this condition will be evaluated.
    //-- Here as condition evaluates to false as (80 is not less than or equal to 60)
    } else if(mark_percent <= 60) {
        printf("You passed, but a lot scope to improve.");

    //-- If 2nd condition fails then this condition will be evaluated.
    //-- And here it evaluates to true, because (80 is not less than 80 but it equal to 80)
    //-- So this program will print "You done well, you can do better than this."
    } else if(mark_percent <= 80) {
        printf("You done well, you can do better than this.");
    } else {
        printf("Execelent, keep it up.");
    }
}
```

## Logical operators
Logical operators are used to combine multiple conditions/constraints. 
Logical Operators returns either 0 or 1, it depends on whether the expression result is true or false. 

We have 3 logical operators in the C language:
- OR Operator (||)

| X | Y | X OR Y |
|--|--|--|
| 0 | 0 | 0 |
| 1 | 0 | 1 |
| 0 | 1 | 1 |
| 1 | 1 | 1 |

- And Operator (&&)

| X | Y | X AND Y |
|--|--|--|
| 0 | 0 | 0 |
| 1 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 1 | 1 |
- Not Operator (!)

| X | NOT X |
|--|--|
| 0 | 1 |
| 1 | 0 |

### Example of OR operator
``` c
#include <stdio.h>

int main()
{
    int a = -1, b = 20;
    if (a > 0 || b > 0) {
        printf("Any one of the given value is "
               "greater than 0\n");
    } else {
        printf("Both values are less than 0\n");
    }
    return 0;
}
```

### Example of AND operator
``` c
#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    if (a > 0 && b > 0) {
        printf("Both values are greater than 0\n");
    } else {
        printf("Both values are less than 0\n");
    }
    return 0;
}
```
### Example of AND operator - 2
``` c 
#include <stdio.h>

int main()
{
    int physics_marks = 90;
    int chemestry_marks = 90;
    int maths_marks = 90;
    int bio_marks = 80;

    short int eligible_for_engineering = 0;
    short int eligible_for_medical = 0;
    if( physics_marks >= 90 && chemestry_marks >= 90 && maths_marks >= 90) {
        eligible_for_engineering = 1;
    }

    if( physics_marks >= 90 && chemestry_marks >= 90 && bio_marks >= 90) {
        eligible_for_medical = 1;
    }

    if(eligible_for_medical && eligible_for_engineering) {
        printf("Your execelent. Do what you want to do!");
    } else if(eligible_for_engineering) {
        printf("Go for engineering.");
    } else if(eligible_for_medical) {
        printf("Go for medical");
    } else {
        printf("World open for you, explore it.");
    }
}
```

## switch statement
The switch statement allows us to execute one code block among many alternatives.
You can do the same thing with the if...else..if ladder. However, the syntax of the 
switch statement is much easier to read and write.

**Syntax :**

``` txt 
switch (expression)
{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}
```

### Example 1:
``` c 
int main() {
    int num = 10;
    switch(num) {
        case 5:
            printf("Number is 5\n");
            break;
        case 10:
            printf("Number is 10\n");
            break;
        default:
            printf("None of above cases executed.\n");
    }

    //-- This is similar to following if-else block.
    if(num == 5) {
        printf("Number is 5");
    } else if(num == 10) {
        printf("Number is 10");
    } else {
        printf("None of above cases executed.\n");
    }
}
```

**Points to note -**
1) Expresion in "switch(expression)" must be evaluated to int type. So we can use int or char with it.
2) Each case statement will be checked one after the another - top to down
3) If match found, statement associated with that case will be executed. If that case block didnt 
have break statement in it, then all statments under it (including statements of other case block)
will be executed until break or end of switch is reached.


### Example 2:

``` c 
int main() {
    int num = 5;
    switch(num) {
        case 5:
            printf("Number is 5\n");
        case 10:
            printf("Number is 10\n");
            break;
        default:
            printf("None of above cases executed.\n");
    }
}
```

In this example, we did not added break in case "5". So it will output -

``` sh
# output
Number is 5
Number is 10
```
