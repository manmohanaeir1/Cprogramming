#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	char operation;
	printf("please enter operator:");
	scanf("%c", &operation);
	printf("please enter firstNumber:");
	scanf("%d", &x);
	printf("please enter SecondNumber:");
	scanf("%d", &y);
	
	switch(operation)
	{
			case '+':
		printf("SUM is = %d", x+y);
		break;
			case '-':
		printf("SUB is = %d", x-y);
		break;
			case '*':
		printf("MUl is = %d", x*y);
		break;
			case '/':
		printf("DIV is = %d", x/y);
		break;
	default:
		printf("you entered wrong input!!");
		
	}
	return 0;
}
