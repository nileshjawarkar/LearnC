#include <stdio.h>

int main()
{
    const int max_stars = 5;
    int counter = 1, stars_on_line = 0;
    while(counter <= max_stars) {
        stars_on_line = counter;
        while(stars_on_line > 0) {
            printf("*");
            stars_on_line--;
        }
        printf("\n");
        counter++;
    }
    return 0;
}
