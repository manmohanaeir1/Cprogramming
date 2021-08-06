#include<stdio.h>
int main()
{
    int i , n, intNum[10];
    printf("How many number want to store:\n");
    scanf("%d", &n);
    printf("Enter Ten number to store: \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &intNum[i]);
    }
     printf("These Entered  Ten Numbers Are: \n");
     for ( i = 0; i <n ; i++)
     {
         printf("%d , \t ", intNum[i]);
     }
    return 0;
     
    
}