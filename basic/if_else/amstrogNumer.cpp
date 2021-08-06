#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, originalNumber, cubSum = 0, rem;
	printf("Enter a number");
	scanf("%d", &num);
	originalNumber  = num;
	while(!num ==0)
	{
		rem = num%10;
		cubSum =cubSum+ (rem*rem*rem);
		
	}
	if(originalNumber ==cubSum)
	{
	printf("\n %d is an amstrong number \n",originalNumber );
	}
	else
	{
		printf("\n %d is not an amstrong number",originalNumber );
	}
	
	
	
	return 0;
	
}
