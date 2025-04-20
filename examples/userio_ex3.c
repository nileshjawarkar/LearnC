#include <stdio.h>

int main()
{
    char ch = ' ';
    int result = 0, num = 0;
    while (ch != 'q')
    {
        //-- Ask user to enter a number and read it using scanf.
        printf("Enter a number to add :");
        scanf("%d", &num); 
        //-- added getchar to discard newline char entered to submit a number.
        getchar();

        //-- Add number to result
        result += num;

        //-- Ask if user want to continue ..
        printf("Press any key to continue or 'q' to exit : ");
        ch = getchar(); //-- ch = fgetc(stdin);
        //-- On above line we can use fgetc as well.
    }
    printf("Result = %d\n", result);
    return 0;
}
