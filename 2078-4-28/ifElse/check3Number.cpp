//#WAP to check 3 number

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter first number = \n");
    scanf("%d", &a);
    printf("Enter second number = \n");
    scanf("%d", &b);
    printf("Enter third number = \n");
    scanf("%d", &c);
    if (a>b && a>c)
    {
        printf("first number  %d,  is greater then other\n", a);
    }
    else if(b>c && b>a)
    {
        printf("second  number  %d,  is gre5ater then other\n", b);
    }
    else
    {
        printf("Third  number %d, is greater then other\n", c);
    }
    return 0;
    
}
