//Accept N number from user and return the Smallest number
// Input :  n : 6 
//          No : 66
//          [Elements : 85 66 3 66 93 88]
// Output : 3


#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMin = 0;
    
    iMin = Arr[iCnt];
    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
           iMin = Arr[iCnt];
        }
    }
    
    return iMin;

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

    iRet = Minimum(p,iSize);

    printf("Minimum : %d",iRet);

    free(p);

    return 0;
}