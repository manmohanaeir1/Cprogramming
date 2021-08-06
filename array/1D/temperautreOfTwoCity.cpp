// WAP to store temperature of two cities  of week and diplay it
#include<stdio.h>
const int CITY =2;
const int WEEK = 7;
    int main()
    {
        int temperature[CITY][WEEK];
        // using nested loop to store values
        for(int i = 0; i < CITY; i++)
        {
         printf("Enter Specific Temperature:\n");
            for(int j = 0; j < WEEK; j++)
            {
                printf("City %d, day %d: ", i+1, j+1);
                scanf("%d", &temperature[i][j]);
            }
        }
        //print values
        printf("\n Displaying City, Day, Temperature:\n\n");
        // uisng nested loop  for dispaly values
        for(int i =0; i < CITY; i++)
        {
            for(int j = 0; j < WEEK; j++)
            {
                printf("City %d, Day %d = %d\n", i+1, j+1, temperature[i][j]);
            }
        }

    }
