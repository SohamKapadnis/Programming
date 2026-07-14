// Write a program which accept string from user and display white spaces
// Input : "Marve89llous121"
// Output : 0

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while (*str != 0)
    {
        if(*str == ' ')
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
    scanf("%[^\n]",arr);

    iRet = CountWhite(arr);

    printf("Num. of White Spaces : %d",iRet);

    return 0;
}