/* Write a program which accept one number from user and off 7th and 10th bit of number
   if it is on.Retrun modified number

   Input : 577
   Output : 1
   
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0XFFFFFDBF;

    iNo = iNo & iMask;

    return iNo;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the Number : ");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("Modified Number : %u",iRet);

    return 0;
} 
