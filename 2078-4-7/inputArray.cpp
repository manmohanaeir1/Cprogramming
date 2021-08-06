#include<stdio.h>
#include<conio.h>
int main()
{
	int values[5], i;
	printf("Enter 5 integers:\n");
	for(i = 0; i<5; i++)
	{
		scanf("%d", &values[i]);
	}
	printf("Displsying Integers:\n");
	for(i = 0; i<5; i++)
	{
		printf("%d\n", values[i]);
	}
	return 0;
}
