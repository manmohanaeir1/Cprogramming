#include<stdio.h>
#include<conio.h>
int main()
{
    int n, rev, tmp = 0,rem;
    printf("Enter number to check:");
    scanf("%d", &n);
    tmp =n;
    while (tmp!= 0)
    {
        rem = tmp%10;
        rev =rev*10+rem;
        tmp/= 10;

    }
    if (rev==n)
    {
        printf("%d Is Palindrome NUmber", n);
    }
    else
    {
        printf("%d Is Not Paindrome Number", n);
    }
    return 0;    
    
}