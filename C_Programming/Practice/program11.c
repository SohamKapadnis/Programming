/*
    START
        Accept number as NO
        If No is completely divisible by 2
            then print Even
        Otherwise
            print Odd
    STOP

    START
        Accept number as NO
        Divide No by 2
        If remainder is 0
            then print as Even
        Otherwise 
            print as Odd
    STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("No is Even\n");
    }
    else
    {
        printf("No is Odd");
    }

    return 0;
}