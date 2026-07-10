// Accept number of rows and number of columns from user and Display below Pattern 

/*  
Input : iRow = 4    iCol = 4

Output :    a       b       c       d
            A       B       C       D
            a       b       c       d
            A       B       C       D
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    char Cch = '\0';
    char Sch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,Cch = 'A',Sch = 'a'; j <= iCol; j++,Cch++,Sch++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",Cch);
            }
            else
            {
                printf("%c\t",Sch);
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