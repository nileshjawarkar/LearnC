
# Learn C language : Mathematical operators and assignments
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
| /= | x /= 5 | x = x / 5 | Divide existing value by 5 |
| %= | x %= 5 | x = x % 5 | Modulus of existing value by 5 |

### Example
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
