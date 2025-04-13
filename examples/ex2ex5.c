#include <stdio.h>

int main()
{
    printf("Enter 10 numbers ..\n");
    int numbers[10];

    int num = 1; 
    while(num <= 10) {
        printf(" Number %d => ", num);
        int temp_num = 0;
        scanf("%d", &temp_num);

        numbers[num - 1] = temp_num;
        num++;
    }

    printf("You entered = [");
    num = 0; 
    while(num < 10) {
        int temp_num = numbers[num];
        printf("%d, ", temp_num);

        //-- check and modify number here
        if(temp_num % 2 != 0) {
            numbers[num] = temp_num * 2;
        }
        num++;
    }
    printf("]\n");

    printf("Modified list = [");
    num = 0; 
    while(num < 10) {
        printf("%d, ", numbers[num]);
        num++;
    }
    printf("]\n");
}
