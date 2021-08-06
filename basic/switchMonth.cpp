#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int month;
	printf("please enter month:");
	scanf("%d", &month);
	switch(month)
	{
			case 1:
		printf("jan");
		break;
			case 2:
		printf("feb");
		break;
			case 3:
		printf("march");
		break;
			case 4:
		printf("Apr");
		break;
			case 5:
		printf("may");
		break;
			case 6:
		printf("jun");
		break;
			case 7:
		printf("july");
		break;	
			case 8:
		printf("aug");
		break;
			case 9:
		printf("sept");
		break;
			case 10:
		printf("oct");
		break;
			case 11:
		printf("nov");
		break;	
			case 12:
		printf("Dec");
		break;
	default:
		printf("you entered wrong!!");
		
	}
	return 0;
}
