# Learn C language : Scopes

In C, variables are only accessible inside the region they are created. This is called scope.

Lets discuss it using following example - 

``` c 
#include <stdio.h>              //-- Global scape -> 1
int value = 55;

void foo() { printf("n side foo => value = %d\n", value); }

int main() {
  printf("At main start => value = %d\n", value);
  int value = 11;               //-- 2
  if (value > 5) {
    printf("At If start => value = %d\n", value);
    int value = 5;              //-- 3
    //-- Just block
    {
      printf("At block start => value = %d\n", value);
      int value = 7;            //-- 4
      printf("At block end => value = %d\n", value);
    }
    printf("At If end => value = %d\n", value);
  }
  foo();
  printf("At main end => value = %d\n", value);
  return 0;
}
```

Compile and run the above program. It will generate following output -
``` sh
At main start => value = 55
At If start => value = 11
At block start => value = 5
At block end => value = 7
At If end => value = 5
n side foo => value = 55
At main end => value = 11
```

In above example, int type variable value is declared at
1) Global scope (1 => value = 55)
   - This value is availble to entire program un-less it shadowed by another
   variable with same name.
   - In the function foo, their no local variable named foo. But stil program compiles and
   when executed it prints "55". This because as it has no local declaration, it is able to
   access value variable in global scope.
2) In the main function (2 => value = 11)
    TODO
3) In if block (3 => value = 5)
    TODO
4) In simple block (4 => value = 7)
    TODO
