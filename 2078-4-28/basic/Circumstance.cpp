#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    float cir;
    printf("Enter value of redius(r) = ");
    scanf("%d", &r);
    cir = (2*pi*r); // formula
    printf("Circumstance = %f", cir);
    return 0;
}