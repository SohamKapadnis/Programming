//Accept N number from user and accept one another number as NO ,return index of first occurence of that NO  
// Input :  n : 6 
//          No : 66
//          [Elements : 85 66 11 80 93 88]
// Output : 1


#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
           return iCnt;
        }
    }

    return -1;
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

    printf("Enter number to find occurence : \n");
    scanf("%d",&iValue);

    iRet = FirstOcc(p,iLength,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurrence of number is on %d index",iRet);
    }
   
    free(p);

    return 0;
}