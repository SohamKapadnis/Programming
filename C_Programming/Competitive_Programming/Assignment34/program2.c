/* Write a program which accept string from user and copy the content of that string
   int another string (Implement strncpy () function)

   Input : "Marvellous Multi OS"

   Output : "Marvellous"  
   
   Note : If third parameter is greater than the size of source stirng then copy 
          whole string into destination 

*/

#include<stdio.h>

void StrNCpyX(char *src, char *dest,int iCnt)
{
    // Filter
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] ;   // Empty string

    StrNCpyX(arr,brr,10);

    printf("%s",brr);       // Marvellous
    return 0;
}