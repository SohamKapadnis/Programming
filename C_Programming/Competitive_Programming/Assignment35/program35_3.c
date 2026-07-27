// Write a program which check whether 7th and 15th,21st,28th bit is On or Off

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x08104040;

    UINT iAns = iNo & iMask;
    
    if( (iAns == iMask) )
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
        printf("7th and 15th,21st,28th bit is ON\n");
    }
    else
    {
        printf("7th and 15th,21st,28th bit is OFF\n");
    }

    return 0;
}
/*
    0000    0000    0000    0000    0000    0000    0100    0000
m1    0       0       0       0       0       0       1       0

    0000    0000    0000    0000    0100    0000    0000    0000
m2   0       0       0       0       1       0       0       0

    0000    0000    0001    0000    0000    0000    0000    0000
m3   0       0       1       0       0       0       0       0

    0000    1000    0000    0000    0000    0000    0000    0000
m4   0       1       0       0       0       0       0       0
*/
// 0 8 1 0 4 0 4 0