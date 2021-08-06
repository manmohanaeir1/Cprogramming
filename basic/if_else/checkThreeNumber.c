#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int  a, b,c, large;
	
	printf("Enter three number \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		large = a;
		else
		large = c;
		
	} 
	else
	{
		if(b>c)
		large = b;
		else
		large= c;
	}
	printf("Largest nunber is :%d", large);
	return 0;
}
