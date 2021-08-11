#include<stdio.h>
#include<conio.h>
int main()
{
    int threeArry[3][3]{
        {2,3,4},
        {4,5,6},
        {6,7,8}
    };
    int i,j, k;
    printf("3*3 Matrix:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
               printf("%d\t", threeArry[i][j]);
                
            }
            printf("\n");
            
        }
        return 0;
        
}