// Write a program which check whether 5th and 18th bit is On or Off

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0x00000010;
    UINT iMask2 = 0x00010000;


    UINT iAns1 = iNo & iMask1;
    UINT iAns2 = iNo & iMask2;

    if((iAns1 == iMask1) && (iAns2 == iMask2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("5th and 18th bit is ON\n");
    }
    else
    {
        printf("5th and 18th bit is OFF\n");
    }

    return 0;
}
/*
    0000    0000    0000    0000    0000    0000    0000    0000
    0       0       0       0       0       0       1       0

    0000    0000    0000    0010    0000    0000    0000    0000
    0       0       0       1       0       0       0       0
*/