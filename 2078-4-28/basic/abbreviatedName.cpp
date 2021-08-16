//WAP to convert fullname into Abbreviated
#include<stdio.h>
#include<conio.h>
int main()
{
    char fName[10], mName[10], lName[10];
    printf("Enter full name with middle Name = ");
    scanf("%s%s%s",&fName,&mName,&lName);
    printf("Abbreviated name = %c%c%s", fName[0], mName[0], lName);
    return 0;
}