/* Write a program which accept one number from user and on its 4 bits 
  .Return modified number

   Input : 73
   Output : 79
   
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X0000000F;

    iNo = iNo | iMask;

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
