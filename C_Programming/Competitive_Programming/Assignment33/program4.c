/* Write a program which accept string from user and accept one character.
   Return index of last occurrence of that character

   Input : "Marvellous Multi OS"
            M
   Output : 11

   Input : "Marvellous Multi OS"
            W
   Output : -1

*/

#include<stdio.h>

int LastChar(char * str,char ch)
{
    int iIndex = 0;
    int iLast = -1;

    while(*str != '\0')
    {
        if(* str == ch)
        {
            iLast = iIndex;
        }
        str++;
        iIndex++;
    }
    return iLast;
}

int main()
{
    char arr[20];
    char cValue = '\0'; 
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]s",arr);

    printf("Enter the Character : ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is : %d",iRet);

    return 0;
}





