//Leap Year Program in C Using IF-ELSE

// those year which if divisible by 4
//Now the real logic begins, Here is the year is divided by then 4 then it's a Leap year, Because as we all know that Leap Year comes in every 4 years that is the reason we are going to divide by 4. if (year % 4 == 0),
//Again We are using Nested IF-ELSE because we have to check for century year(Ex. 1900, 2200, 2300, 2500), Because Century year easily divides by 4. So if if (year % 100 == 0) this condition is true then we will go to the fourth step.
//Now if this if (year % 400 == 0) condition is true then the Year Entered by the user and is a Leap Year, and if this condition is not true that means the year is not a Leap Year.

#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d, This is leap year!", year);
            }
            else
            {
                printf("%d, This is not leap year!", year);
            }
        }
        else
        {
            printf("%d, This is leap year!", year);
        }
    }
    else
    {
        printf("%d, This is not leap year!", year);
    }
    return 0;
}