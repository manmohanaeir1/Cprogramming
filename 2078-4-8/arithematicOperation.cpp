#include<stdio.h>
#include<conio.h>
int main()
{

	int  num1, num2, result;
	char operation;
	printf("Enter Operation");
	scanf("%c", &operation);
	printf("Enter First Number:");
	scanf("%d", &num1);
	printf("Enter Second Number:");
	scanf("%d", &num2);

		switch(operation)
		{

		case '+':
			printf("Sum Is= %d", num1+num2);
			break ;
		case '-':
			printf("Sub Is= %d", num1-num2);
			break ;
		case '*':
			printf("Mul Is= %d", num1*num2);
			break ;
		case '/':
			printf("Div Is= %d", num1/num2);
			break ;
		case '%':
			printf("Rem Is= %d", num1%num2);
			break ;
		defaule:
			printf("Wrong Operation!!");
		
		}
	
	return 0;
}

