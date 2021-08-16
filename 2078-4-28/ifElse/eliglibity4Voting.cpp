// WAP to check eligility for votig or not

#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("ENter your age:");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("Okey you are eligible for voting!!");
    }
    else
    {
        printf("Sorry, You are not eligible for voting!!");
    }
    return 0;
    
}