#include <stdio.h>

int main()
{
    int num = 0, result = 1;
    printf("Enter any number = ");
    scanf("%d", &num);
    if (num != 0)
    {
        for (int t = 0; t < 3; t++)
        {
            result = result * num;
        }
        printf("Cube of %d = %d\n", num, result);
    }
    else
    {
        printf("Please number other than zero (0)\n");
    }
}
