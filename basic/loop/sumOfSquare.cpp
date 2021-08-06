



#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
     int i=1, num, sum=0;
    printf("Enter number\n");

    scanf("%d", &num);

    while (i <= num)       
    {
           
            sum = sum+i;
            i++;
    }
        printf("Sum of square of all  numbers  = %d\n", (sum*sum));


	return 0; 
}



  
