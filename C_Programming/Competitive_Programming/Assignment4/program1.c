// Write a program which accept number from user and display its multiplication of factor

// Input : 12
// Output : 144 (1*2*3*4*6)

// Input : 10
// Output : 10 (1*2*5)

#include <stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {   
            iAns = iAns * iCnt; 
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

    iRet = MultiFact(iValue);

    printf("MultiPlication of  Factors : %d",iRet);
 
    return 0;
}

// Time Complexity : O(N)