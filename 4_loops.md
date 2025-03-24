# Loops

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
We will do the same thing we done in above program using for loop which provide much clear syntax
as compilre to while loop but does same thing.

``` c 
for(int counter = 0; counter < 10; counter++)
{
    //-- statements to execute
    printf("Counter = %d\n", counter);
}
```
