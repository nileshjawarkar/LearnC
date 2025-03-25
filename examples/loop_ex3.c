#include <stdio.h>

/*--------
    *  -> space = 4, star = 1    --
   **  -> space = 3, star = 2     |
  ***  -> ....                    5 Rows
 ****  -> ....                    |
*****  -> space = 0, start = 5   ---
----------*/

int main()
{
    const int max_stars = 5;
    //-- in above structure, we have number of rows = max number of star on single line.
    //-- Loop 1: Will manage number of row/line need to print.
    for(int row = 1; row <= max_stars; row++) {
        const int stars = row;

        //-- Loop 2: Will print number of space required befor stars
        //-- which are actualy max_stars - number of star on current line/row.
        const int spaces = max_stars - stars;
        for(int space = 1; space <= spaces; space++) {
            printf(" ");
        }

        //-- Loop 3: Will print number of star on single line.
        for(int star = 1; star <= stars; star++) {
            printf("*");
        }
        //-- Print new-line after each row/line
        printf("\n");
    }
}
