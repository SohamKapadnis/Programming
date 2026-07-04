// Write a program which accept range from user and return addition of all even numbers in between range
// Range should positive

// Input : 23 30
// Output : 30 29 28 27 26 25 24 23

// Input : -10 2
// Output : Invalid

#include<stdio.h>

void RangeDisplayRev(int iNo1,int iNo2)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo2 < iNo1 )
    { 
        printf("Invalid Input");
    }

    for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
    {
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0; int iValue2 = 0;
  
    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}

// TimeComplexity = O(N)