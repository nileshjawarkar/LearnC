# Learn C language : Exercises for loops, conditionals and arrays

1) Cube of a number - Write a program
    - which takes a number as input
    - calculate its cude and
    - print it on the screen.
2) Table for a number - Write a program
    - which takes a number as input
    - and calculate its table. 
    - for example if 15 given as input, it will print
      15 30 45 ... 150 (all 10 numbers)
3) Sum of even numbers - Write a program
    - which takes max number or limit as input, 
    - then calculate sum of even numbers less than that limit.
    - and print it on the screen.
4) Sum and Average of 10 Numbers - Write a program 
    - which takes 10 number as input using scanf
    - Then calculate sum and average of them
    - and then print it.
5) Make odd numbers double and print it.
    - Take 10 numbers as input and save it in array.
    - Check for odd numbers in array, if found any make it double by multipling by 2.
    - Print new modified array values.


## Solutions

### Ex1: 
Cube of a number - Write a program
- which takes a number as input
- calculate its cude and
- print it on the screen.

``` c 
int main() {
    int num = 0, result = 1;
    printf("Enter any number = ");
    scanf("%d", &num);
    if (num != 0) {
        for (int t = 0; t < 3; t++) {
            result = result * num;
        }
        printf("Cube of %d = %d\n", num, result);
    } else {
        printf("Please number other than zero (0)\n");
    }
}
```

### Ex2:

Table for a number - Write a program
- which takes a number as input
- and calculate its table. 
- for example if 15 given as input, it will print
  15 30 45 ... 150 (all 10 numbers)

``` c 
int main()
{
    int num = 0;
    printf("Enter any number = ");
    scanf("%d", &num);
    if (num != 0) {
        for (int i = 1; i <= 10; i++) {
            printf("  => (%d * %d) = %d\n", num, i, num * i); 
        }
    } else {
        printf("Please number other than zero (0)\n");
    }
}
```
