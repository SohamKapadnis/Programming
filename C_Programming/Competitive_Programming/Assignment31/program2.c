// Write a program which accept string from user and count number of small characters
// Input : "Marvellous" 
// Output : 9

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    // Filter

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    printf("Count of Small Letter : %d",iRet);
}