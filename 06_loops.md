# Learn C language : Loops

Loop executes block of statements repeatedly until condition is reached.


## While loop syntax

``` c 
int counter = 0;
while(counter < 10)
{
    //-- statements to execute
    printf("Counter = %d\n", counter);
    counter++;
}
```
Above program will executes 10 times and print "Counter = 0 to 9".
Remember counter start with 0 and end when counter reached to 10. When counter value 
is 10, it will break the loop.

## For loop
We will do the same thing we done in above program using for loop. For loop provides 
much clear syntax as compare to while loop but does same thing.

``` c 
for(int counter = 0; counter < 10; counter++)
{
    //-- statements to execute
    printf("Counter = %d\n", counter);
}
```
## Do while - variant of while loop
It is used in the cases, where we want to execute the code at least once even if loop
condition evaluates to false. For while and for loop, loop condition must be true to execute
the code block.

``` c 
int counter = 1;
do 
{
    //-- statements to execute
    printf("Counter = %d\n", counter);
} while(i < 1);
```

In above code, do-while loop will executes the printf and then check the condition.
Here loop condition evaluates to false and loop breaks.

## Code Examples

### Print following structure of stars (*), using while loop.
``` 
*
**
***
****
*****
```

Code -
``` c 
#include <stdio.h>

int main()
{
    const int max_stars = 5;
    int counter = 1, stars_on_line = 0;
    while(counter <= max_stars) {  //-- outer loop
        stars_on_line = counter;
        while(stars_on_line > 0) { //-- Inner loop
            printf("*");           //-- Print stars on the line
            stars_on_line--;
        }
        printf("\n");              //-- After print the required number of stars
                                   //-- move cursor to next line.
        counter++;
    }
    return 0;
}
```

Now lets understand what above program is doing.
``` txt
//-- At start,
    int counter = 1, //-- counter initialized to 1.
    while(counter <= max_stars) //-- , here
        //-- counter is 1 and max_stars is 5, 
        //-- as 1 <= 5, condition evaluates to true, so it execute the 
        //-- block under it. Then
        stars_on_line = counter; //-- which set stars_on_line = 1 as counter = 1.
        //-- Now inner loop will get executed.
        while(stars_on_line > 0) //-- Here
            //-- this condition evaluates to true as stars_on_line = 1 which is 
            //-- greator than 0 and executes the printf("*")
            //-- which print 1 star for us.
            stars_on_line--; // Next this statement is executed.
            //-- which reduces value of stars_on_line by 1.
            //-- now it becomes 0.
        //-- Now when next iteration inner while executes
        while(stars_on_line > 0) //-- Here
            //-- stars_on_line = 0, and 0 > 0 condition evaluates to false.
            //-- so loop will break.
        //-- now we are outoff inner loop and next following
        //-- statements will get executed.
        printf("\n"); //-- print new-line, which move cursor to start of next line
        counter++;    //-- Increment counter to 2 (counter = counter + 1)
    //-- Now next iteration of outtter loop executed.
    while(counter <= max_stars) //-- , here
    //-- Now counter = 2, which is less than max_stars,
    //-- so condition is eavaluates to true and execution will continue.

    //-- This execution of outer loop continues until condition becomes false.
    //-- and finally it will print the stars as expected by the program.
```


