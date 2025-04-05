#include <stdio.h>

int main() {
  /*
    int num = 0;
    printf("Enter a number = ");
    scanf("%d", &num);
    printf("You entered number = %d\n", num);

    char fullName[30];
    printf("Type your full name: \n");
    scanf("%s", fullName);
    printf("Hello %s", fullName);
    return 0;
    */ 

    char fullName[30];
    printf("Type your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s", fullName);
    return 0;

}
