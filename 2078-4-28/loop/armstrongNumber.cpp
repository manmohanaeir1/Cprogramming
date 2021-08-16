// Armstrong number is sum of individual cube of given number = given number
/*  153 = 1^3 + 5^3 + 3^3
    153 = 1+125+27
    153 = 153 this is Armstrong number 
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int num, r, c, sum = 0, temp;
    printf("Enter number:");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        r = num % 10; // for last digit ie, 3 of 153
        c = r * r * r;
        sum = sum + c;

        // for second digigt
        num = num / 10;
    }
    num = temp;
    if (num == sum)
    {
        printf("Armstrong number.");
    }
    else
    {
        printf("Not Armstrong number.");
    }
    return 0;
}