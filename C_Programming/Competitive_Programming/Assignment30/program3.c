/*  Accept character from user.If it is capital then display all the character from the input character till Z
    if input character is small then print all the character in reverse order till a. In other cases 
    return directly.

    I : Q
    O : Q R S T U V W X Y Z

    I : m
    O :  m l k j i h g f e d c b a

    I : 4
    O : 
*/

#include <stdio.h>

void Display(char ch)
{ 
    int i = 0;
    if(ch >= 65 && ch <= 90)
    {
        for(i = ch; i <= 90; i++)
        {
            printf("%c\n",ch);
            ch++;
        }
    }
    else if(ch >= 97 && ch <= 122)
    {
        for(i = ch; i >= 97; i--)
        {
            printf("%c\n",ch);
            ch--;
        }
    }
    else
    {
        return;
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