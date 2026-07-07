//Accept N number from user and return product of all odd elements
// Input :  n : 6 
//          [Elements : 15  66  3   70  10  88]
// Output : 45

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iSize)
{
    int iCnt = 0;
    int iOddSum = 0;

    for(iCnt = 0 ;iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
           iOddSum = iOddSum + Arr[iCnt];
        }
    }

    return iOddSum;
}

int main()
{
    int iLength = 0,iCnt = 0,iValue = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of Elements : ");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements \n",iLength);

    
    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        printf("Enter Elements No %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p,iLength);

    printf("Sum of Odd Numbers : %d",iRet);

    free(p);

    return 0;
}