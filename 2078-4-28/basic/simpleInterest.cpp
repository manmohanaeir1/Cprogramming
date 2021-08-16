// #WAP to calculate simple interrest

#include<stdio.h>
#include<conio.h>
int main()
{
    int p,t;
    float r,I;
    printf("Enter value of  p = \n");
    scanf("%d", &p);
    printf("Enter value of  t = \n");
    scanf("%d", &t);
    printf("ENter value of r = \n");
    scanf("%f", &r);
    I = (p*t*r)/100;
    printf("Interest =  %f", I);
    return 0;


}