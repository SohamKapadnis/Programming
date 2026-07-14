/* Write a program which displays ASCII table.Table contains symbol,Decimal,Hexadecimal and
   Octal represent of every member from 0 to 255
*/

#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHexaDecimal\tOctal\n");
    printf("-------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%X\t%o\n",i,i,i,i);     // %X  for hexadecimal %o Octal
    }
}


int main()
{
    DisplayASCII();

    return 0;
}