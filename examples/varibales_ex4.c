#include <stdio.h>

int main()
{
    int age = 24;
    float pi = 3.14;
    char ch = 'A';

    printf("int size = %lu, float size = %lu, ch size = %lu\n", sizeof(age), sizeof(pi), sizeof(ch));
}
