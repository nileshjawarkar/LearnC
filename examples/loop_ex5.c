#include <stdio.h>
/*---------------------------------------------------------------------------
 *********
  *******
   *****
    ***
     *
------------------------------------------------------------------------------*/

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
