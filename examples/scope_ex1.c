#include <stdio.h>
int value = 55;

void foo() { printf("n side foo => value = %d\n", value); }

int main() {
  printf("At main start => value = %d\n", value);
  int value = 11; //-- 2
  if (value > 5) {
    printf("At If start => value = %d\n", value);
    int value = 5; //-- 3
    printf("At If end => value = %d\n", value);
  }

  //-- Just block - Not using any specific statement like if, while, for etc.
  {
    printf("At block start => value = %d\n", value);
    int value = 7; //-- 4
    printf("At block end => value = %d\n", value);
  }

  foo();
  printf("At main end => value = %d\n", value);
  return 0;
}
