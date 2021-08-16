#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int j,mDay,wDay,date = 1;
    printf("Calender\n\n");
    printf("Enter total day to assign in month:"); // how days are 
    scanf("%d", &mDay);

    printf("\nEnter first date of month (0=mon, 6=sun):");   // which dae  to start month 
    scanf("%d", &wDay);

    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun\n");
    printf("-----------------------------------------------------\n");

    for (j =wDay; j >0; j--)
    {
       printf("\t");
    }
    while (date<=mDay)
    {
        if (wDay!=0)
        {
            if (wDay%7==0)
            {
                printf("\n");
            }
            
            printf("%d\t",date);
            date++;
            wDay++;
        }
        
    }
    return 0;
    
    
}