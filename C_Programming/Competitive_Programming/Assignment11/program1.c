// Write a program which accept range from user and Display all  number in between that range

// Input : 23 27
// Output : 23 24 25 26 27

#include<stdio.h>

void RangeDisplayEven(int iNo1,int iNo2)
{
    int iCnt = 0;

    if(iNo2 < iNo1)
    {
        printf("Invalid Input");
    }
    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue1 = 0; int iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}

// TimeComplexity = O(N)//