// find character is vowel or not
#include<stdio.h>
#include<conio.h>
int main()
{
    char test;
    printf("Enter Character for test= ");
    scanf("%c", &test);
    if (test == 'a'|| 'A' ||test == 'e'||'E' ||test == 'i'||'I'  ||test == 'o'||'O'  ||test == 'u'||'U')
    {
        printf("Your Entered Character %c, Is Vowel\n", test);
    }
    else
    {
         printf("Your Entered Character %c, Is Not Vowel\n", test);
    }
    return 0;

    
}