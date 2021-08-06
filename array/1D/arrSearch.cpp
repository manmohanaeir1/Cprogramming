#include<stdio.h>
#include<conio.h>
int main()
{
    int arrS[5],s,i, temp=0;
    printf("Enter array number:");
    for(i = 0; i<5; i++)
    {
        scanf("%d", &arrS[i]);
    }
printf("Enter your roll number");
scanf("%d", &s);
for(i = 0; i<5; i++)    
{
    if(arrS[i] == s)
    {
        printf("result found  you are passed!!");
        temp = 1;
        break;
    }
}
if (temp == 0)
{
    printf("you are failld!!");
}
return 0;
}