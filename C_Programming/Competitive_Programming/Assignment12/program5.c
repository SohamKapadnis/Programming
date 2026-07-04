//Write a program which accept number from user and count frequency of such a digits  which are less than 6

// Input : 2395
// Output : 3

// Input : 101844
// Output : 5                    

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Total Count of Digits which are less than 6 : %d",iRet);
    
    return 0;
}