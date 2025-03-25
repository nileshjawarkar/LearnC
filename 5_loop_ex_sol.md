# Learn C language : Loops / example solutions

### LE1
``` c 
#include <stdio.h>

/*
*****
****
***
**
*
*/

int main()
{
    const int max_stars = 5;
    for(int counter = max_stars; counter > 0; counter--) {
        int stars_on_line = counter;
        for(; stars_on_line > 0; stars_on_line--) {
            printf("*");
        }
        printf("\n");
    }
}
```
