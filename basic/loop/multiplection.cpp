#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

        int num, i=1;
        printf("Enter number \n");
        scanf("%d",&num);
        printf("\nMultiplication table for %d is:\n",num);
        while (i<=10)
        {
           printf("%d X %d => %d\n",num,i,(num*i));
           i++;
        }
        
	return 0;
}

