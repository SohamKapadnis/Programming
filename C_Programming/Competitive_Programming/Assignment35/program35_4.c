// Write a program which check whether 7th and 8th,9th bit is On or Off

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0X000001C0;

    UINT iAns = iNo & iMask;


    if((iAns == iMask))
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
        printf("7th,8th and 9th bit is ON\n");
    }
    else
    {
        printf("7th,8th and 9th bit is OFF\n");
    }

    return 0;
}
/*
    0000    0000    0000    0000    0000    0001    1100    0000
    0       0       0       0       0       1       C       0

*/