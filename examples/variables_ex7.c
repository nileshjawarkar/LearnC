#include <stdio.h>

int main()
{
    int physics_marks = 90;
    int chemestry_marks = 90;
    int maths_marks = 90;
    int bio_marks = 80;

    short int eligible_for_engineering = 0;
    short int eligible_for_medical = 0;
    if (physics_marks >= 90 && chemestry_marks >= 90 && maths_marks >= 90)
    {
        eligible_for_engineering = 1;
    }

    if (physics_marks >= 90 && chemestry_marks >= 90 && bio_marks >= 90)
    {
        eligible_for_medical = 1;
    }

    if (eligible_for_medical && eligible_for_engineering)
    {
        printf("Your execelent. Do what you want to do!\n");
    }
    else if (eligible_for_engineering)
    {
        printf("Go for engineering.\n");
    }
    else if (eligible_for_medical)
    {
        printf("Go for medical\n");
    }
    else
    {
        printf("World open for you, explore it.\n");
    }
}
