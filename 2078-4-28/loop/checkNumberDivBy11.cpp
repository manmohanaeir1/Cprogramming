#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("ENter number:");
    scanf("%d",&num);
    if(num%11 ==0)
    {
        printf("Yes %d, is divisible by 11.", num);
    }
    else
    {
        printf("No %d, is not divisible by 11.", num);
    }
    return 0;
}