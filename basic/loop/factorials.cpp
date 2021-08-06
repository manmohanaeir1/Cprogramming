#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int  n,i,f;
    f=i=1;
    printf("Enter number to find factorial:");
    scanf("%d",&n);
    while (i<=n)
    {
        f*=i;
        i++;
    }
    printf("The Fractional of  %d is %d:",n,f);
    
	return 0;
}

