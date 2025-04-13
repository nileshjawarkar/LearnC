# Learn C language : Loops exercises


### LE1) Write a program to print following structure -
``` 
*****
****
***
**
*
```

### LE2) Write a program to print following structure -

```
    *
   **
  ***
 ****
*****
```

### LE3) Write a program to print following structure - 1 star at top and 9 at bottom.
```
    *
   ***
  *****
 *******
*********
```

### LE4) Write a program to print following structure - 9 star at top and 1 at bottom.
```
*********
 *******
  *****
   ***
    *
```
### LE5) Write a program to print following structure 

```
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
```

### LE6) Write a program to print above structure 2 times

## Solutions 


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

/*-----------------
*********
 *******
  *****
   ***
    *
------------------*/
int main() {
  int star_on_row = 9;
  int space_on_row = 0;
  int row = 1;
  while (row <= 5) {
    int space = 1;
    while (space <= space_on_row) {
      printf(" ");
      space++;
    }

    int star = 1;
    while (star <= star_on_row) {
      printf("*");
      star++;
    }

    printf("\n");
    row++;
    star_on_row -= 2;
    space_on_row += 1;
  }
  return 0;
}
```

### LE4

``` c
#include <stdio.h>
/*-------------------------
      space 4
     |<  >|
     *               -|--
    ***               |
   *****
  *******
 *********            9 Rows
  *******
   *****
    ***               |
     *               -|--
 |- 9   -|
    stars


Max row == Max stars == odd number
Max spaces = (Max row - 1) / 2
---------------------------*/

int main() {
  const int MAX_STAR_ROWS = 9;
  int space_on_row = 4;
  int star_on_row = 1;

  int mode = 0;
  int row = 1;
  while (row <= MAX_STAR_ROWS) {
    if (star_on_row == MAX_STAR_ROWS) {
      mode = 1;
    }
    int space = 1;
    while (space <= space_on_row) {
      printf(" ");
      space++;
    }

    int star = 1;
    while (star <= star_on_row) {
      printf("*");
      star++;
    }

    printf("\n");
    row++;
    if (mode == 1) {
      star_on_row -= 2;
      space_on_row += 1;
    } else {
      star_on_row += 2;
      space_on_row -= 1;
    }
  }
  return 0;
}
```
