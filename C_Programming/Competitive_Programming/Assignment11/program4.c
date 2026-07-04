// Write a program which accept range from user and return addition of all even numbers in between range
// Range should positive

// Input : 23 30
// Output : 108

// Input : -10 2
// Output : Invalid

#include<stdio.h>

int RangeSumEven(int iNo1,int iNo2)
{
    int iCnt = 0;
    int iSum = 0;

    if((iNo2 < iNo1) || (iNo1 < 0))
    { 
        return -1;
    }
    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0; int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid Input");
    }
    else
    {
        printf("Summation of numbers in Range : %d",iRet);
    }

    return 0;
}

// TimeComplexity = O(N)