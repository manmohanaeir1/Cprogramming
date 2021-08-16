#include<stdio.h>
#include<conio.h>
int main()
{
	int M[3][4],i,j;
	printf("Enter the matrix element\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&M[i][j]);
		}
	}
	printf("the matrix is:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d\t",M[i][j]);
		}
	printf("\n");
    }
    getch ();
}