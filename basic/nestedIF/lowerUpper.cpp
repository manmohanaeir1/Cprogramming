#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	int cahr;
	printf("Enter Character");
	char=getchar();
	if(char!=EOF)
	{
		printf("End of file uncounted \n");
	
	}
	else if (char>'a' && char<='z');
	{
		print("lower case character\n");
	}
	else if(chart>='A' && cahr<='Z')
	{
			print("Upper case character\n");
	}
	else if(char>='0' &&<='9')
	{
		printf("number\n");
	}
	else
	{
		printf("AlphaNumeric");
	}
	return 0;
}
