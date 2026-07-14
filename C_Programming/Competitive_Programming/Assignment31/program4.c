// Write a program which accept string from user and check whether it contains vowels in it or not
// Input : "MarvellouS" 
// Output : TRUE

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if(
             *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || 
             *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' 
          )
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    int bRet = FALSE;

    printf("Enter String : ");
    scanf("%[^\n]c",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("It Contains Vowels");
    }
    else
    {
        printf("There is NO vowels");
    }

    return 0;
}