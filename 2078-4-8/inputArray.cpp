#include<stdio.h>
#include<conio.h>
int main()
{
	int values[5], i;
	printf("Enter 5 numbers:\n");
		for(i=0; i<5; i++)
		{
			scanf("%d", &values[i]);
		}
		
		printf("Displaying integers: \n");
			for(i=0;i<5;i++)
			{
				printf("%d\n", values[i]);
			}
	return 0;
}
