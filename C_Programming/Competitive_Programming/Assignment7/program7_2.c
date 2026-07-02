// Accept amount in US dollar and return its Corresponding value in Indian currency
// Consider 1$ = 70 rs

// Input : 5
// Output : 350

// Input : 10
// Output : 700

#include <stdio.h>

int DollarToINR(int iNo)
{
    int iRs = 0;

    iRs = 70 * iNo;

    return iRs;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}
