//C Program to Count Number of Digits of a Number (Integer)
// first we need to understand this propgram then write program to find armstrong number, palindrome number or not?

/*
123/10
then 3 is eliminated 
and only 12 is remaining 
and again 12/10
remaining is 1
++
++
*/

#include<stdio.h>
int main()
{
    int num, count=0;
    printf("Enter number:");
    scanf("%d", &num);
    while (num>0)
    {
        count++;
        num = num/10;
    }
    
    printf("Count: %d",count);
    return 0;

}