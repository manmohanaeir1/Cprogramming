#include <stdio.h>
#include <conio.h>
int main()
{
    int rollArr[10], search, i, n;

    printf("Enter number of students \n");
    scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("Enter students roll number \n");
            scanf("%d", &rollArr[i]);
        }
    printf("Enter roll number to search result\n");
    scanf("%d", &search);
        for (i = 0; i < n; i++)
        {
                if (rollArr[i] == search)
                {
                    printf("Search result  found\n You are passed!!");

                    break;
                }
        }
    if (i == n)
        printf("Result not found!!\n");
    return 0;
}
