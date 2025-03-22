#include <stdio.h>

int main()
{
    //-- As signed it default. We should read it as signed int i1 = 10;
    int i1 = -10; 
    short int i2 = 10;
    long int i3 = -20; 
    //-- long int is same as long. So we can simple used long as a shot form.
    //-- So i3 and i4 are same
    long i4 = 20; 
    unsigned int i5 = 10; 
    unsigned long i6 = 10; 

    printf("size of int = %lu and unsigned int = %lu\n", sizeof(i1), sizeof(i5));
    printf("size of short int = %lu\n", sizeof(i2));
    printf("size of long int = %lu\n", sizeof(i3));
    printf("size of long = %lu and unsigned long = %lu\n", sizeof(i4), sizeof(i6));
}
