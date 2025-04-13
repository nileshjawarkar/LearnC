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
    - which takes 10 numbers as input using scanf
    - Then calculate sum and average of them
    - and then print it.
5) Make odd numbers double and print it.
    - Take 10 numbers as input and save it in array.
    - Print what your entered as input.
    - Check for odd numbers in array, if found any make it double by multiplyng by 2.
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
int main() {
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

### Ex3:

Sum of even numbers - Write a program
- which takes max number or limit as input, 
- then calculate sum of even numbers less than that limit.
- and print it on the screen.

``` c 
int main() {
    int max_number = 0, result = 0;
    printf("Enter max number = ");
    scanf("%d", &max_number);
    if (max_number > 1) {
        for (int num = 1; num <= max_number; num++) {
            if (num % 2 == 0) {
                result = result + num;
            }
        }
        printf("Sum of all even numbers from (%d - %d) = %d\n", 1, max_number, result);
    } else {
        printf("Please number bigger than one (1).\n");
    }
}
```

### Ex4:
Sum and Average of 10 Numbers - Write a program 
- which takes 10 numbers as input using scanf
- Then calculate sum and average of them
- and then print it.

``` c 
int main() {
    printf("Enter 10 numbers ..\n");
    int num = 1, sum = 0;
    while(num <= 10) {
        printf(" Number %d => ", num);
        int temp_num = 0;
        scanf("%d", &temp_num);
        sum += temp_num;
        num++;
    }
    int avg = sum / 10;
    printf("Sum of 10 numbers = %d, average = %d\n", sum, avg);
}
```

### Ex5:

Make odd numbers double and print it.
- Take 10 numbers as input and save it in array.
- Print what your entered as input.
- Check for odd numbers in array, if found any make it double by multiplyng by 2.
- Print new modified array values.

``` c 
int main() {
    printf("Enter 10 numbers ..\n");
    int numbers[10];
    //-- Take inputs and save it to array.
    int num = 1; 
    while(num <= 10) {
        printf(" Number %d => ", num);
        int temp_num = 0;
        scanf("%d", &temp_num);

        numbers[num - 1] = temp_num;
        num++;
    }

    //-- Print entered input and modify it
    printf("You entered = [");
    num = 0; 
    while(num < 10) {
        int temp_num = numbers[num];
        printf("%d, ", temp_num);

        //-- check and modify number here
        if(temp_num % 2 != 0) {
            numbers[num] = temp_num * 2;
        }
        num++;
    }
    printf("]\n");

    //-- Print modified array
    printf("Modified list = [");
    num = 0; 
    while(num < 10) {
        printf("%d, ", numbers[num]);
        num++;
    }
    printf("]\n");
}
```
