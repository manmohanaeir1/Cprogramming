



#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
     int i, num, odd_sum = 0;
    printf("Enter the value of num\n");

    scanf("%d", &num);

    for (i = 1; i <= num; i++)

    {
            odd_sum = odd_sum + i;

    }

    printf("Sum of all odd numbers  = %d\n", odd_sum);

	return 0; 
}



  
