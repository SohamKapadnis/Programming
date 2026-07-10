// Accept number of rows and number of columns from user and Display below Pattern 

/*  
Input : iRow = 4    iCol = 4

Output :    *       *       *       *
            *       *               *
            *               *       *
            *       *       *       *
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;

    if(iRow != iCol)    // Filter for diagonal Pattern
        {
            printf("Invalid Parameters");
            printf("Number of rows and columns should be same");
            return;
        }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == j) || (i == 1) || (j == 1) || (j == iCol) || i == iRow)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}