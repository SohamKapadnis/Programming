// Write a program which accept number from user and return the count of even digit

// Input : 2395
// Output : 1

#include<stdio.h>

int CountEven(int iNo)
{
    int iEvenCnt = 0;
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
            iEvenCnt++;
        }
        iNo = iNo / 10;
    }

    return iEvenCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Count of Even Digit : %d",iRet);
}