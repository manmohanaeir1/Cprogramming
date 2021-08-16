#include<stdio.h>
#include<conio.h>
int main()
{
    int s1,s2,s3,s4,s5, obtMarks;
    float percentage;
    printf("Enter marks of first subject: ");
    scanf("%d", &s1);
    printf("Enter marks of second subject: ");
    scanf("%d", &s2);
    printf("Enter marks of third subject: ");
    scanf("%d", &s3);
    printf("Enter marks of fourth subject: ");
    scanf("%d", &s4);
    printf("Enter marks of fifth subject: \n");
    scanf("%d", &s5);
    if (s1>=40 && s2>=40 && s3>=40 && s4>=40 && s5>=40)
        {
        obtMarks = s1+s2+s3+s4+s5;
            printf("totlal obtained  marks  : %d \n",obtMarks);
            percentage = (obtMarks/5);
            printf("Percentage is %f \n",percentage);
            if (percentage <=80 && percentage>=70)
            {
                printf("Division :first \n");
            }
            else if (percentage <=70 && percentage>=60)
            {
                printf("Division :second\n");
            }
            else if (percentage <=60 && percentage>=40)
            {
                printf("Division :third \n");
            }
            
        printf("Result :Passed!!");
        }
    else
        {
            printf("Result :Failled!!");
        }
    return 0;
}