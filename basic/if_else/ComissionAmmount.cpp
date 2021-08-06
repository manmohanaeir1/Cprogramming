#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Ammount;
	float Rate;
	float ComissionAmmount;
		printf("enter Ammount:");
		scanf("%d", &Ammount);
			if(Ammount >= 40000)
			{
				printf("Enter Value of Rate");
				scanf("%f", &Rate);
				
				ComissionAmmount = (Ammount*Rate)/100;
				printf("The comission Ammount:%f", ComissionAmmount);
				
				
			}
			else
			{
				printf("you entered less then 40000");
			}
	return 0;
}
