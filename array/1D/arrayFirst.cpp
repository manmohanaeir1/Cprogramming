#include<stdio.h>
int main()
{
    int i;
    int a[] = {2,3,5,6,7,8,9};
    float b[] ={4.6,33.3,6.7,4.4,6.6,6.99};
    printf("printing integer number in array\n");
    for ( i = 0; i < 7; i++)
    {
        printf("%d ,", a[i]);
    }

    printf("printing Float number in array\n");

    {
        for ( i = 0; i < 6; i++)
        {
            printf("%f , \t", b[i]);
        }
        
    }
    return 0;
    
}