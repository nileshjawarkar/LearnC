# Learn C language : Scopes

In C, variables are only accessible inside the region they are created. This is called scope.

Lets discuss it using following example - 

``` c 
#include <stdio.h>              //-- Global scape -> 1
int value = 55;

void foo() { 
    printf("In side foo => value = %d\n", value); 
}

int main() {
  printf("At main start => value = %d\n", value);
  int value = 11; //-- 2
  if (value > 5) {
    printf("At If start => value = %d\n", value);
    int value = 5; //-- 3
    printf("At If end => value = %d\n", value);
  }

  //-- Just a code block - Not using any specific statement like if, while, for etc.
  {
    printf("At block start => value = %d\n", value);
    int value = 7; //-- 4
    printf("At block end => value = %d\n", value);
  }

  foo();
  printf("At main end => value = %d\n", value);
}
```
Lets discuss, how scope defines avalibility of "***int value***" variable ...

1) At first, "***int value = 55***" defined at global scope (out size any function).
   - This value is available to entire program un-less it shadowed by definition of another
   variable with same name.
   - In the function foo, their no local variable named foo. But still program compiles and
   when executed it prints "55". This because as it has no local declaration, it is able to
   access value variable in global scope.
2) In the main function, before defining new local variable, following statement prints "55" value of global variable.
   ***printf("At main start => value = %d\n", value);***

   But after that, ***int value = 11;*** definition of this new local variable shadows the global variable. 
   So it becomes the value variable, whoes value (11) is available to next statement in the current code block.

3) In if block, following statement prints value "11".
   ***printf("At If start => value = %d\n", value);***

   But after definition of ***int value = 5;*** here also this new local variable shadows the local variable 
   defined before it and following statement prints "5".
   ***printf("At If end => value = %d\n", value);***

4) In next simple scope block, prints value "11".
   ***printf("At block start => value = %d\n", value);***

**Compile and run the above program. It will generate following output -**

``` sh
At main start => value = 55
At If start => value = 11
At If end => value = 5
At block start => value = 11
At block end => value = 7
In side foo => value = 55
At main end => value = 11
```
