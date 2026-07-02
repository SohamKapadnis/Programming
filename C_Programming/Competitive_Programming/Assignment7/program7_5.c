// Write a program which return difference between Even Factorial and Odd Factorial of given number

// Input : 5
// Output : -7   (8-15)

// Input : 10
// Output : 2895   (3840-945)

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEFact = 1;
    int iOFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt-- )
    {           
        if((iCnt % 2) == 0 )  
        {
            iEFact = iEFact * iCnt;
        }
    }
    for(iCnt = iNo; iCnt >= 1; iCnt-- )
    {           
        if((iCnt % 2) != 0 )  
        {
            iOFact = iOFact * iCnt;
        }
    }

    return (iEFact - iOFact);   
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial(Even-Odd) difference Between  is %d",iRet);

    return 0;
}
