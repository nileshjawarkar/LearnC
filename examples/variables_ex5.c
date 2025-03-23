#include <stdio.h>

int main()
{
    //-- As signed it default. We should read it as signed int i1 = 10;
    int i1 = -10; 
    short int i2 = 10;
    //-- long int is same as long. So we can simple used long as a shot form.
    long int i3 = -20; 
    unsigned int i4 = 10; 
    unsigned long i5 = 10; 

    printf("size of int = %lu\n", sizeof(i1));
    printf("size of short int = %lu\n", sizeof(i2));
    printf("size of long int = %lu\n", sizeof(i3));
    printf("size of unsigned int = %lu\n", sizeof(i4));
    printf("size of unsigned long = %lu\n", sizeof(i5));
}
