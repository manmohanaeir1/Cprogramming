//WAP to sort number in accending order

#include <stdio.h>
#include <conio.h>
int main()
{

    int numArr[10], i, j, temp, n;
    //clrscr();
    printf("Enter value of N \n"); //
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Elements \n");
        scanf("%d", &numArr[i]);
    }
    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++) //
            if (numArr[i] > numArr[j])  // > for accending < for descending
            {
                temp = numArr[i];
                numArr[i] = numArr[j];
                numArr[j] = temp;
            }
    }

    printf("\n Ascending sorted numbers are: \n");
    for (i = 0; i < n; i++)
    {
        printf(" %d", numArr[i]);
    }
    return 0;
}