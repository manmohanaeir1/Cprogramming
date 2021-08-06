#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num, i = 2, f = 0;
    printf("Enter the positive integer number-\n");
    scanf("%d", &num);
    if (num == 1) {
        printf("1 is neither the prime nor the composite number!\n");
    } else {
        while (i <= num / 2) {
            if (num % i == 0) {
                f = 1;
            }
            ++i;
        }
        if (f == 0) {
            printf("\nThe %d is the prime number.\n", num);
        } else {
            printf("\nThe %d is Composite number.\n", num);
        }
    } 
	return 0; 
}

