#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter number to check:");
    scanf("%d", &num);
    if (num>0)
    {
        printf("Entered number is positive! \n");
    }
    else if (num<0)
    {
        printf("Entered number is negative! \n");

    }
    else
    {
        printf("Entered number is zero(%d)", num);
    }
    return 0;

    
}