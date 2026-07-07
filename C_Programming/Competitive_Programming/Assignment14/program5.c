//Accept N number from user and accept one another number as NO ,return frequency of NO from it 
// Input :  n : 6 
//          No : 12
//          [Elements : 85 66 11 80 93 88]
// Output : 0


#include<stdio.h>
#include<stdlib.h>

int frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int ifcnt = 0;

    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            ifcnt++;
        }
    }
    
    return ifcnt;

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

    printf("Enter number to find frequency : \n");
    scanf("%d",&iValue);

    iRet = frequency(p,iSize,iValue);

    printf("Frequency of No : %d",iRet);
   
    free(p);

    return 0;
}