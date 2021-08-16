//WAP To Print Multiplication Table Using For Loop
#include<stdio.h>
#include<conio.h>
int main()
{
    int num , mul, i;
    printf("ENter number:");
    scanf("%d", &num);
    for ( i = 1; i <= 10; i++)
    {
        mul = num * i;
        printf("%d * %d = %d \n", num, i, mul);
    }
    return 0;
}