//# WAP to dilplay Fibonacci Series using while looop

//As we know that Fibonacci Series is start with Zero ext Element i0 and ns One Then we add previous two element and print next element of Fibonacci Series .
/*   Fibonacci of 3 is
    0+1 = 1
    1+1 =2
    1+2 = 3
    Fibonacci Series: 0, 1 , 1, 2,
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int count , n, v1=0, v2=1, tmp=0;
    printf("Enter the number: \n");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d , " , v1, v2);
    count = 2;
    while (count<=n)
    {
        tmp = v1+v2;
        v1 = v2;
        v2 = tmp;
        count++;
        printf("%d, ", tmp);

    }
    return 0;

}