// WAPto calculate Area of triangle
#include<stdio.h>
#include<conio.h>
int main()
{
    float  b, h, area;
    printf("Enter value of Hight and Base respectively = \n");
    scanf("%f%f", &b, &h);
    area = (b*h)/2;  // area of triangle
    printf("Area of triangle = %f",area);
    return 0;
}