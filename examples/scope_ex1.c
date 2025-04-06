#include <stdio.h>
int value = 55;

void foo() { printf("n side foo => value = %d\n", value); }

int main() {
  printf("At main start => value = %d\n", value);
  int value = 11;
  if (value > 5) {
    printf("At If start => value = %d\n", value);
    int value = 5;
    //-- Just block
    {
      printf("At block start => value = %d\n", value);
      int value = 7;
      printf("At block end => value = %d\n", value);
    }
    printf("At If end => value = %d\n", value);
  }
  foo();
  printf("At main end => value = %d\n", value);
  return 0;
}
