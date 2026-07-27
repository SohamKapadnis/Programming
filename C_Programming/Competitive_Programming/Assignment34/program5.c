/* Write a program which accept2 string from user and concat second string after 
   first string (Implement strcat() function)

   Input : "Marvellous Infosystems"
            "Logic Building"

   Output : "Marvellous Insystems Logic Building"  


*/

#include<stdio.h>

void StrCatX(char *dest, char *src)
{
    // Filter
    while((*dest != '\0'))
    {
        dest++;
    }
    while((*src != '\0'))
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Infosytems";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr);       // arvellous ulti
    return 0;
}