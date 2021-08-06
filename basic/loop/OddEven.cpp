



#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
     int i=1, num, Even_sum=0, Odd_sum;
    printf("Enter number\n");

    scanf("%d", &num);
    while (i <= num)    
    {
        Even_sum = Even_sum+i ;
         Odd_sum =Odd_sum+i;
        i++;
     }
        if (num%2==0)
           {
             printf("sum of all even numbers  = %d\n", Even_sum);
           }
           else
           printf("sum of all odd number is =%d\n", Odd_sum);
	return 0; 
}



  
