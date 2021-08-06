#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Enter a number\n");
	again:
	scanf("%d" , &n);
	if(n<0)
	{
		printf("NUmber is negative so re_Enter a number \n");
		goto again;
	}
	
	return 0;
}
