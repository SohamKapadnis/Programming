// Write a program which check whether First and Last bits On or Off

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0X80000001;

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
        printf("First and Last bit is ON\n");
    }
    else
    {
        printf("First and Last bit is OFF\n");
    }

    return 0;
}
/*
    1000    0000    0000    0000    0000    0000    0000    0001
    8       0       0       0       0       0       0       1

*/