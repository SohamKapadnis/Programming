// Write a program which accept string from user and return diff betn frequency of capital n small characters
// Input : "MarvellouS" 
// Output : 6 (8-2)

#include<stdio.h>

int Difference(char *str)
{
    int iCntCapital = 0,iCntSmall = 0;

    // Filter

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCntCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }
        str++;
    }

    return (iCntSmall - iCntCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]c",arr);

    iRet = Difference(arr);

    printf("Difference : %d",iRet);
}