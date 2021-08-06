#include<stdio.h>
int main()
{
    int a[10], i, greatest;
    printf("Enter ten integers : \n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    greatest = a[i];
    for(i = 0; i < 10; i++)
    {
        if (a[i] > greatest)
        {
            greatest = a[i];
        }
        
    }
    printf("the greatest number is: %d", greatest);
    return 0;
    
    
}