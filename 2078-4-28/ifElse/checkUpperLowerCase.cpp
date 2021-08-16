//WAP to Check Character Is Uppercase, Lowercase Alphabet Or A Digit Or A Special Symbol\

// if character is between 65 to 90 then You Entered UPPER CASE 
// if it is 97 to 122 Then You Entered LOWER CASE 
// if it is between 48 to 57 then it is a DIGIT And Rest Are SPECIAL SYMBOLS.

#include<stdio.h>
#include<conio.h>
int main()
{
    char C;
    printf("Press any character:");
    scanf("%c", &C);
    if (C>=65 && C<=90)
    {
       printf("Your pressed UpperCase!");
    }
    else if(C>=97 && C<=122)
    {
        printf("Your pressed LowerCase!");
    }
    else if(C>=48 && C<=57)
    {
        printf("Your pressed Integer number!");
    }
    else
    {
        printf("Your pressed other special character!");
    }
    return 0;
}