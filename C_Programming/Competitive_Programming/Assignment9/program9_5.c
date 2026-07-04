// Write a program which accept number from user and return the difference between summation of even digit and summantion of odd Digits


// Input : 2395
// Output : -15 (2-17)

#include<stdio.h>

int CountDiff(int iNo)
{
    int iEvenNo = 0;
    int iOddNo = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if( iDigit % 2 == 0)
        {
            iEvenNo = iEvenNo + iDigit;
        }
        if( iDigit % 2 != 0)
        {
            iOddNo = iOddNo + iDigit;
        }
        iNo = iNo / 10;
    }

    return (iEvenNo - iOddNo);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Count of Even Digit : %d",iRet);
}