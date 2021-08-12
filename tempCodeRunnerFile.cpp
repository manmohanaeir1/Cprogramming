#include<stdio.h>
#include<conio.h>
int  main()
{
int M[3][4];
 int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("Enter elements of matrix\n");
scanf("%d",&M[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("%d\t",M[i][j]);
}
printf("\n");
}
getch();
}
