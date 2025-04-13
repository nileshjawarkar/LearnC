#include <stdio.h>

int main()
{
    int max_number = 0, result = 0;
    printf("Enter max number = ");
    scanf("%d", &max_number);
    if (max_number > 1)
    {
        for (int num = 1; num <= max_number; num++)
        {
            if (num % 2 == 0)
            {
                result = result + num;
            }
        }
        printf("Sum of all even numbers from (%d - %d) = %d\n", 1, max_number, result);
    }
    else
    {
        printf("Please number bigger than one (1).\n");
    }
}
