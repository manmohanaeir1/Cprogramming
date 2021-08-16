//C Program To Calculate Factorial Of A Given Number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num, fact=1, i;
    printf("ENter number= ");
    scanf("%d", &num);
    for ( i = 1; i <=num; i++)
    {
        fact = fact * i;  
    }
    printf("Factorials of %d is= %d", num, fact);
    return 0;
    

}