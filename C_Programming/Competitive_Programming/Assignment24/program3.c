// Accept number of rows and number of columns from user and Display below Pattern 

/*  
Input : iRow = 4    iCol = 5

Output :    A       A       A       A       A
            B       B       B       B       B
            C       C       C       C       C
          
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    char Cch = '\0';
    
    for(i = 1,Cch = 'A'; i <= iRow; i++,Cch++)
    {
        
        for(j = 1; j <= iCol; j++)
        {
            {
                printf("%c\t",Cch);
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