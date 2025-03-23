#include <stdio.h>

int main()
{
    // Assignment 
    int x = 10;
    printf("Initial value of x = %d\n", x);
    // Increment it by 5
    x += 5;
    printf("After adding 5 to x = %d\n", x);
    // Decrement it by 2
    x -= 2;
    printf("After subtracting 2 from x = %d\n", x);
    // Multiply it by 4
    x *= 4;
    printf("After multiplied by 4, x = %d\n", x);
    // divide it by 2
    x /= 2;
    printf("After division by 2, x = %d\n", x);
    // remainder after dividing by 3
    x %= 3;
    printf("Remainder after division by 3, x = %d\n", x);
}
