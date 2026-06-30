// Write a program which accept number from user and display summation of its non factors

// Input : 12
// Output : 50

// Input : 10
// Output : 37

#include <stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {   
            iAns = iAns + iCnt; 
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Sumation of  Non-Factors : %d",iRet);
 
    return 0;
}

// Time Complexity : O(N)