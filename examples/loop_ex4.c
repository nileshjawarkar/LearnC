#include <stdio.h>
/*---------------------------------------------------------------------------
    *         ---             spaces = 4, star = 1
   ***         |              spaces = 3, star = 3 (star on line1/row1 + 2)
  *****        5 row /lines
 *******       |
*********     ---             spaces = 0, star = 9
|-> 9 col<-|
------------------------------------------------------------------------------*/

int main()
{   
    int stars = 1;
    int spaces = 4;
    for(int row = 1; row <= 5; row++) {
        for(int space = 1; space <= spaces; space++) {
            printf(" ");
        }

        for(int star = 1; star <= stars; star++) {
            printf("*");
        }
        //-- Print new-line after each row/line
        printf("\n");
        stars += 2;
        spaces -= 1;
    }
    return 0;
}
