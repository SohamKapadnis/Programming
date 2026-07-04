// Write a program which accept number from user and return the count of Digits in Between 3 and 7


// Input : 2395
// Output : 3

#include<stdio.h>

int CountRange(int iNo)
{
    int iCtrng = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if( (iDigit > 3) && (iDigit < 7))
        {
            iCtrng++;
        }
        iNo = iNo / 10;
    }

    return iCtrng;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Count Between 3 and 7 : %d",iRet);
}