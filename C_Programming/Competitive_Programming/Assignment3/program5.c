// Accept on charcter from user and check whether that character is vowel (a,e,i,o,u) or not

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel ( char CValue)
{
    if( (CValue == 'a') || (CValue == 'e') || (CValue == 'i') || (CValue == 'o') || (CValue == 'u') ||
        (CValue == 'A') || (CValue == 'E') || (CValue == 'I') || (CValue == 'O') || (CValue == 'U')  
      )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }  
}


#include<stdio.h>

int main ()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter Character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("%c is Vowel",cValue);
    }
    else
    {
        printf("%c is Consonent",cValue);
    }


    return 0;
}