#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=4; i++)
    {
       for ( j = 1; j <=i; j++)
       {
           printf("%2d \t", j); // alocating space of 2 digits
       }
       printf("\n");
       
    }
    
}