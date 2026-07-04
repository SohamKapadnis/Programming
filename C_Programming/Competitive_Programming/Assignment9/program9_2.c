// Write a program which accept number from user and return the count of odd digits


// Input : 2395
// Output : 3

#include<stdio.h>

int CountOdd(int iNo)
{
    int iOddCnt = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if( iDigit % 2 != 0)
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }

    return iOddCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Count of Even Digit : %d",iRet);
}