#include <stdio.h>

int main() {
  //-- Define a variable holds 10 values
  int marks[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
  //-- We can use loop to initialize its values
  /*
  for (int i = 0; i < 10; i++) {
        marks[ i ] = (i + 1) * 10;
  } */

  //-- print values using another loop
  for (int i = 0; i < 10; i++) {
        printf("marks[%d] = %d\n", i, marks[ i ]);
  }
  return 0;
}
