#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

        int num =1, i=1;
        printf("Enter number \n");
        printf("\n cubic table of 1 to 10  is:\n",num);
        while (i<=10)
        {
           printf("%d = %d\n",i,(i*i*i));
           i++;
        }
        
	return 0;
}

