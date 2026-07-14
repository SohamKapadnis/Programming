/* Write a program which accept string from user and accept one character.
   Check whether that character is present in string or not 

   Input : "Marvellous Multi OS"
            e
   Output : TRUE
*/

#include<stdio.h>

#define TRUE 1
#define FAlSE 0

typedef int BOOL;

BOOL ChkChar(char * str,char ch)
{
    while(*str != '\0')
    {
        if(* str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FAlSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FAlSE;

    printf("Enter String : ");
    scanf("%[^\n]s",arr);

    printf("Enter the Character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}