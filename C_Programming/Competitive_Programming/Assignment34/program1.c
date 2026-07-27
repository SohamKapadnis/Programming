/* Write a program which accept string from user and copy the content of that string
   int another string (Implement strcpy () function)

   Input : "Marvellous Multi OS"

   Output : "Marvellous Mulit OS"   in another string

*/

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    // Filter
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] ;   // Empty string

    StrCpyX(arr,brr);

    printf("%s",brr);       // Marvellous Multi OS

    return 0;
}