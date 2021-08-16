#include <stdio.h>
#include <conio.h>
int main()
{
    int om, s1, s2, s3, s4;
    float per, total;
    printf("Enter the om in 4 different subjects \n");
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);           // %%d vako theo
    total = 400 ;                                       // total marks = total subject =4 , then 4*100 = 400
    om = s1+s2+s3+s4;                                   //obtained marks = subject1 + subject2 + subject3 + subject4
    printf("total marks: %f", total);  
    if (s1 >= 40 && s2 >= 40 && s3 >= 40 && s4 >= 40)
    {
        printf("\nResult:pass");
        per = (om / total) * 100;
        printf("percentage:%f", per);
        if (per >= 80)
            printf("Distinction\n");
        else if (per <= 70)
            printf("1st division\n");
        else if (per <= 60)
            printf("2nd division\n");
        else if (per <= 40)
            printf("3rd division\n");
    }
    else
        printf("you are failed\n");
    return 0;
}