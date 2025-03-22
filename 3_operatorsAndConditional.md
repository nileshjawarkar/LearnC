# Learn C language : Operators and conditinals

## Mathematical operator
- addition (+)
- subtraction (-)
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
    printf("rem of (12 / 5) = %d\n", 12 % 5);

    int num = 10;
    printf("Before increamentation - num = %d\n", num);
    num++;
    printf("After increamentation - num = %d\n", num);
    num--;
    printf("After decrementation - num = %d\n", num);
}
```

## Conditions and comparison operators

- Less than operator (<) 
- Greator than operator (>) : 
- OR operator (||)
- And operator (&&)
- Equality operator (==)
- Gretor than or equal to (>=) 
- Less than or equal to (<=)

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
``` cond_or_and.c
#include <stdio.h>

int main()
{

}
```
