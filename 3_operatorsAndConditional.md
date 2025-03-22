# Learn C language : Operators and conditinals

## Mathmatical operator
- addition (+)
- substraction (-)
- multiplication (*)
- division (/)
- modulus or remainder (%)
- increment (++)
- decrement (--)


``` operators_ex1.c 
#include <stdio.h>

int main()
{
    printf("10 + 5 = %d\n", 10 + 5);
    printf("10 - 5 = %d\n", 10 - 5);
    printf("10 * 5 = %d\n", 10 * 5);
    printf("10 / 5 = %d\n", 10 / 5);
    printf("rem of (10 / 5) = %d\n", 10 % 5);

    int num = 10;
    printf("Before increamentation - num = %d\n", num);
    num++;
    printf("After increamentation - num = %d\n", num);
    num--;
    printf("After decrementation - num = %d\n", num);
}
```

## Conditions and comparision operators

- Less than operator (<) 
- Greator than operator (>) : 
- OR operator (||)
- And operator (&&)
- Equality operator (==)
- Gretor than or equal to (>=) 
- Less than or equal to (<=)

```
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
