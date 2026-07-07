//Accept N number from user and return the largest number
// Input :  n : 6 
//          No : 66
//          [Elements : 85 66 3 66 93 88]
// Output : 93


#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax = 0;
    
    iMax = Arr[iCnt];
    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
           iMax = Arr[iCnt];
        }
    }
    
    return iMax;

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

    iRet = Maximum(p,iSize);

    printf("Maximum : %d",iRet);

    free(p);

    return 0;
}