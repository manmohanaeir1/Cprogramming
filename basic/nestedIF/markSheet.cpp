#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s1,s2,s3,s4, total;
	float p;
	printf("Enter marks in first subjects\n");
	scanf("%d", &s1);
	printf("Enter marks in second subjects\n");
	scanf("%d", &s2);
	printf("Enter marks in third subjects\n");
	scanf("%d", &s3);
	printf("Enter marks in fourth subjects\n");
	scanf("%d", &s4);
	printf("\n --------------------------------------");
	
	total = s1+s2+s3+s4;
	printf("\n Total Marks: %d", total);
	if(s1>=40&&s2>=40&&s3>=40&&s4>=40)	
	{
		printf("\n Result is: Pass");
		p = total/4.0;
		printf("\n Persentage: %f", p);
		if(p>=80)
		{
			printf("\n Division: Distinction");
		}
		else if (p>=70)
		{
		printf("\n Division:First");
		}
		else if (p>=50)
		{
			printf("\n Division:Second");
		}
		else
		{
			printf("\n Division:Third");
		}
	}
	else
	{
		printf("\n Result: Faill");
		printf("\n Persentage: \n %f", p);
	}
	return 0;
}
