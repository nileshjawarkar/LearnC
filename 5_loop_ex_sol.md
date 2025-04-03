# Learn C language : Loops / example solutions

### LE1
``` c 
#include <stdio.h>

/*-------
*****
****
***
**
*
--------*/

int main()
{
    const int max_stars = 5;
    for(int counter = max_stars; counter > 0; counter--) {
        int stars_on_line = counter;
        for(; stars_on_line > 0; stars_on_line--) {
            printf("*");
        }
        printf("\n");
    }
}
```

### LE2

``` c 
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

    return 0;
}
```

### LE3
``` c 
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
```

### LE4
``` c 
#include <stdio.h>

int main()
{   
    int stars = 9;
    int spaces = 0;
    for(int row = 1; row <= 5; row++) {
        for(int space = 1; space <= spaces; space++) {
            printf(" ");
        }

        for(int star = 1; star <= stars; star++) {
            printf("*");
        }
        //-- Print new-line after each row/line
        printf("\n");
        stars -= 2;
        spaces += 1;
    }
    return 0;
}
```
