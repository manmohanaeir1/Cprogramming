/*
12345 of generic root is
=> 1+2+3+4+5 = 15
=> 1+5 = 6

=> 6 is the generic root of 12345
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int num, sum, a;
    printf("Enter number :");
    scanf("%d", &num);
    while (num>10)
    {
        sum = 0;
        while (num)
        {
            a=num%10;
            num = num/10;
            sum += a;
        }
        if(sum>10)
        num = sum;
        else
        break;
    }
    printf("Generic root : %d", sum);
    

    return 0;
}