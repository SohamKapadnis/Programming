/* Write a program which accept one number from user and toggle 7th bit of number
   if it is on.Retrun modified number

   Input : 137
   Output : 201
   
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X40;

    iNo = iNo ^ iMask;

    return iNo;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the Number : ");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified Number : %u",iRet);

    return 0;
} 
/*
    0000    0000    0000    0000    0000    0000    0000    0000
                                               2     4
*/