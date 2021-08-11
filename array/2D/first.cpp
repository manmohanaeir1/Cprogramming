#include<stdio.h>
#include<conio.h>
int main()
{
    int twoArr[2][3] = {{2,3,4},{5,6,7}}; // 2 dimensional array is an array of array // row =2 ,column = 3
    int  i, j;
    printf("Two Dimensional arrangement::\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
        printf("%d\t", twoArr[i][j]);
        }
        printf("\n");
    }  
    return 0;

    
}