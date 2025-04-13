
#include <stdio.h>

int calculate_cube(int number)
{
    return (number * number * number);
}

int main()
{
    printf("Enter a number = ");
    int num = 0;
    scanf("%d", &num);
    if (num > 1)
    {
        int cube = calculate_cube(num);
        printf("Cube of number %d is %d.\n", num, cube);
    }
    else
    {
        printf("Please enter number greator than 1 as input.\n");
    }
}
