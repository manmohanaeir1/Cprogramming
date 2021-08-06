#include<stdio.h>
#include<conio.h>
int main()
{

	int mark1, mark2, mark3, mark4, persentage, totalObtainMarks;
		printf("Enter Mark of first sub:");
		scanf("%d",&mark1);
		printf("Enter Mark of second sub:");
		scanf("%d",&mark2);
		printf("Enter Mark of third sub:");
		scanf("%d",&mark3);
		printf("Enter Mark of fourth sub:");
		scanf("%d",&mark4);
		
			totalObtainMarks = mark1+mark2+mark3+mark4;
			printf("\ntotal %d\n", totalObtainMarks);
			persentage = (totalObtainMarks/4);
			printf("Persentage= %d\n",persentage);
			if(persentage>=40)
			{
				printf("Result = Pass! \n ");
					if(persentage>=80 && persentage<100)
						{
							printf("Division = Distinction");
						}
						else if(persentage>=60 && persentage<80)
						{
							printf("Division = First");
						}
						else if(persentage>=50 && persentage<60)
						{
							printf("Division = Second");
						}
						else if(persentage>=40 && persentage<50)
						{
							printf("Division = Third");
						}
			}
			else
				{
				printf("Result = Fail! ");
				}
	return 0;
}

