#include <stdio.h>

int main() {
    int num = 5;
    switch(num) {
        case 5:
            printf("Number is 5\n");
        case 10:
            printf("Number is 10\n");
            break;
        default:
            printf("Default case executed\n");
    }
}
