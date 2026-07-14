/*  Accept character from user.If character is small display its corresponding
    capital character , and if it small then display its corresponding capital
    In other cases display as it id

    I : Q
    O : q

    I : m
    O : M

    I : 4
    O : 4

    I : %
    O : %
*/

#include <stdio.h>

void Display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
        printf("%c\n",ch);
    }
    else if(ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
        printf("%c\n",ch);
    }
    else
    {
        printf("%c\n",ch);
    }
}


int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}