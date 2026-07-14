// Write a program which accept string from user and display it inn reverse order
// Input : "MArvellouS"
// Output : MuollevrAM

#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;
    char *end = NULL;       // 100 200 300 400 500 600
    char temp = '\0';       // start            end    

    start = str;

    while (*str != '\0')
    {
        str++;
    }
    str--;

    end = str;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
    

    
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^\n]c",arr);

    Reverse(arr);

    printf("%s",arr);

    return 0;
}