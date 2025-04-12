
# Learn C language : Mathematical operators and assignments

## Assignment operator
As name suggest, use of this operator assigns some value to variable.

``` c 
int main() {
    int age = 19; // Here "=" is assignment operator 
                  // which assigns number value 19 to variable age,
                  // In other word, we can say it store the number value 19 in the variable age.
    printf("Age = %d", age);
}
```

## Mathematical operator

C provides following mathematical operators, which allows us to perform
mathematical operations such as addition, substraction, multiplication
and division.

- addition (+)
- subtraction (-)
- multiplication (*)
- division (/)
- modulus or remainder (%)


``` operators_ex1.c 
#include <stdio.h>

int main()
{
    printf("10 + 5 = %d\n", 10 + 5);
    printf("10 - 5 = %d\n", 10 - 5);
    printf("10 * 5 = %d\n", 10 * 5);
    printf("10 / 5 = %d\n", 10 / 5);
    printf("rem of (12 / 5) = %d\n", 12 % 5);
}
```

## Mathematical and Assignment operators

- These operators are combination of mathematical operator and assignment operator.
- Basically they make use of mathematical operator to perform mathematical operation on the 
variable value and then assign that new value to the variable.

| Operator | Example | Same as | Description |
|---------|---------|-------|---|
| ++ | x++    | x = x + 1 | Added 1 to a existing value of variable |
| -- | x--    | x = x - 1 | Substract 1 from  existing value of variable |
| += | x += 5 | x = x + 5 | Added 5 to a existing value of variable |
| -= | x -= 5 | x = x - 5 | Subtract 5 from existing value of variable |
| *= | x *= 5 | x = x * 5 | Multiply existing value by 5 |
| /= | x /= 5 | x = x / 5 | Divide existing value by 5 |
| %= | x %= 5 | x = x % 5 | Modulus of existing value by 5 |


### Example 1

``` c 
int main() {
    int num = 10;
    printf("Before increamentation - num = %d\n", num);
    num++;
    printf("After increamentation - num = %d\n", num);
    num--;
    printf("After decrementation - num = %d\n", num);
}
```


### Example 2
``` c 
#include <stdio.h>

int main()
{
    // Assignment 
    int x = 10;
    printf("Initial value of x = %d", x);

    // Increment it by 5
    x += 5;
    printf("After adding 5 to x = %d", x);

    // Decrement it by 2
    x -= 2;
    printf("After subtracting 2 from x = %d", x);

    // Multiply it by 4
    x *= 4;
    printf("After multiplied by 4, x = %d", x);

    // divide it by 2
    x /= 2;
    printf("After division by 2, x = %d", x);

    // remainder after dividing by 3
    x %= 3;
    printf("Remainder after division by 3, x = %d", x);
}
```
