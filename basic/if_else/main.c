#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("Enter number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The number is even");
	}
	else{
		printf("the number is odd");
	}
	return 0;
}
