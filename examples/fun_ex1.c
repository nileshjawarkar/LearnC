#include <stdio.h>

void sayHello() {
    printf("Hello sir!\n");
}

void sayHelloTo(char name[]) {
    printf("Hello %s\n", name);
}

int add(int num1, int num2) {
    return (num1 + num2);
}

int main() {
    sayHello();

    char person[] = "Mr. Tom";
    sayHelloTo(person);

    int v1 = add(10, 20);
    int v2 = add(13, 25);
    printf("v1 = %d, v2 = %d\n", v1, v2);

    return 0;
}
