//Accept N number from user and accept range , Display all elements from that range
// Input :  n : 6 
//          Start : 60
//          End : 90
//          [Elements : 85 76 11 80 93 66]
// Output : 66  76  80

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iNo1,int iNo2)
{
    int iCnt = 0;

    for(iCnt = 0 ;iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] > iNo1) && (Arr[iCnt] < iNo2))
        {
           printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
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

    printf("Enter the Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter the Ending point : \n");
    scanf("%d",&iValue2);

    Range(p,iLength,iValue1,iValue2);

    free(p);

    return 0;
}