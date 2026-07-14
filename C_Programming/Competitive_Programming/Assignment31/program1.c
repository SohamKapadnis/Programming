// Write a program which accept string from user and count number of capital characters
// Input : "Marvellous Multi OS"
// Output : 4

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    // Filter

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]c",arr);

    iRet = CountCapital(arr);

    printf("Count of Capital Letter : %d",iRet);
}