#include <stdio.h>

int main()
{
    printf("Enter 10 numbers ..\n");
    int num = 1, sum = 0;
    while(num <= 10) {
        printf(" = Number %d => ", num);
        int temp_num = 0;
        scanf("%d", &temp_num);
        sum += temp_num;
        num++;
    }

    int avg = sum / 10;
    printf("Sum of 10 numbers = %d, avarage = %d\n", sum, avg);
}
