//Accept N number from user and display such numbers which contains 3 digits in it
// Input :  n : 6 
//          [Elements : 8225 665 76 66 953 858]
// Output : 17 17 3 13 17 21


#include<stdio.h>
#include<stdlib.h>

int DigitsSum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iNo = 0;
    int iDigit = 0;

    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {
        iNo = Arr[iCnt];
        int iSum = 0;

        while (iNo > 0)
        {
           iDigit = iNo % 10;
           iSum = iSum + iDigit;
           iNo = iNo / 10;
        }

        printf("%d\t",iSum);
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements \n",iSize);
   
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter Elements No %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);

    return 0;
}