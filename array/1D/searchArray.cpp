// WAP to search  result using ROll NUmber ;
#include<stdio.h>
#include<conio.h>
int main()
{
    int  i, n, roll, stdArry[5], temp=0;
    for(i=0; i<5; i++)
    {
        printf("Enter roll number to store \n");
        scanf("%d", &stdArry[i]);
    }
    printf("Enter roll.n  to get result\n");
    scanf("%d", &roll);
    for(i=0; i<5; i++)
    {
        if(stdArry[i] == roll)
        {
            printf("passed");
            temp = 1;
            break;
           
        }
        
    }
    if(temp==0)
    {
        printf("faill");
    }

    
    return 0;
}