#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("%d, Is Even Number.", num);
    }
    else
    {
        printf("%d, Is Odd Number.", num);
    }
    return 0;
    
    
}