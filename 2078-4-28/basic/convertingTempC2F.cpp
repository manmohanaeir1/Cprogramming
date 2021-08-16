// # Converting Temperature Celsius Into Fahrenheit
// Fahrenheit (°F) = (Celsius x 1.8) + 32;
// In case of Celsius  = 5/9 x (F - 32)


#include<stdio.h>
#include<conio.h>
int main()
{
    int Cel;
    float Fahr;
    printf("Enter Celsius = ");
    scanf("%d", &Cel);
    Fahr = (Cel *1.8)+ 32;
    printf("Fahrenheit (°F) = %f",Fahr);
    return 0;

}