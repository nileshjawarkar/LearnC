# Learn C language : Operators and conditinals

## Mathematical operator
- addition (+)
- subtraction (-)
- multiplication (*)
- division (/)
- modulus or remainder (%)
- increment (++) : Adds 1 to existing value
- decrement (--) : Subtract 1 from existing value


``` operators_ex1.c 
#include <stdio.h>

int main()
{
    printf("10 + 5 = %d\n", 10 + 5);
    printf("10 - 5 = %d\n", 10 - 5);
    printf("10 * 5 = %d\n", 10 * 5);
    printf("10 / 5 = %d\n", 10 / 5);
    printf("rem of (12 / 5) = %d\n", 12 % 5);

    int num = 10;
    printf("Before increamentation - num = %d\n", num);
    num++;
    printf("After increamentation - num = %d\n", num);
    num--;
    printf("After decrementation - num = %d\n", num);
}
```

## Assignment operators
Assignment operator is used to assign a value to a variable.

| Operator | Example | Same as | Description |
|---------|---------|-------|---|
| = | x = 5 |  | Assign value to a variable |
| += | x += 5 | x = x + 5 | Added 5 to a existing value of variable |
| -= | x -= 5 | x = x - 5 | Subtract 5 from existing value of variable |
| *= | x *= 5 | x = x * 5 | Multiply existing value by 5 |
| /= | x /= 5 | x = x / 5 | Devide existing value by 5 |
| %= | x %= 5 | x = x % 5 | Modulus of existing value by 5 |



## Conditions and comparison operators

- Less than operator (<) 
- Greator than operator (>) 
- Equality operator (==)
- Gretor than or equal to (>=) 
- Less than or equal to (<=)
- Not-equal to operator (!=)

### Simple example of if-else
``` cond_ifelse.c
#include <stdio.h>

int main()
{
    int age = 18;
    if( age >= 18) 
    {
        printf("Your are eligible for votting");
    } else {
        printf("Please wait for %d years", 18 - age);
    }
}
```
### Nested if-else
``` cond_ifelseif.c
#include <stdio.h>

int main()
{
    int mark_percent = 80;
    if(mark_percent <= 40) {
        printf("You failed. You can do it, just put some more effort.");
    } else if(mark_percent <= 60) {
        printf("You passed, but a lot scope to improve.");
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
