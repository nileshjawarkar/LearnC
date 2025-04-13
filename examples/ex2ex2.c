#include <stdio.h>

int main()
{
    int num = 0, result = 1;
    printf("Enter any number = ");
    scanf("%d", &num);
    if (num != 0)
    {
        for (int i = 1; i <= 10; i++) {
            printf("  => (%d * %d) = %d\n", num, i, num * i); 
        }
    }
    else
    {
        printf("Please number other than zero (0)\n");
    }
}
