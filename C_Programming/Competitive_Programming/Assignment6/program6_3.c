// Write a program to find FACTORIAL of given number

// Input : 5
// Output : 120(5*4*3*2*1)

// Input : -5
// Output : 120(5*4*3*2*1)

#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt-- )
    {              
        iFact = iFact * iCnt;
    }
    return iFact;   

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of No : %d\n",iRet);

    return 0;
}

// Time Complexity : O(N)