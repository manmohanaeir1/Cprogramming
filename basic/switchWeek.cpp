#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int month;
	printf("please enter week:");
	scanf("%d", &month);
	switch(month)
	{
			case 1:
		printf("Sunday");
		break;
			case 2:
		printf("Monday");
		break;
			case 3:
		printf("Tuesday");
		break;
			case 4:
		printf("Wednesday");
		break;
			case 5:
		printf("Thrusday");
		break;
			case 6:
		printf("Friday");
		break;
			case 7:
		printf("Saturday");
		break;	
		
	default:
		printf("you entered wrong!!");
		
	}
	return 0;
}
