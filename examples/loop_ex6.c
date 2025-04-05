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
