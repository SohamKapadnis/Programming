// Write a program which accept number from user and display its factor in Decresing order

// Input :  12
// Output : 6 4 3 2 1

#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    int iAns = 1;
    int icnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {   
           for(icnt = iCnt; icnt > 0; icnt--)
           {
                printf("%d\t",iCnt);
                break;
           } 
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

// Time Complexity : O(N)