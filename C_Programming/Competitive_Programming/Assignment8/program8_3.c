//Write a program which accept distance in kilometre and conert it into meter
//(1 kilometre = 1000 metre )

// Input : 5
// Output : 5000

#include <stdio.h>

int KMtoMetre(int iNo)
{
    int iMtr = 0;

    iMtr = 1000 * iNo;

    return iMtr;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance in KiloMetre : ");
    scanf("%d",&iValue);

    iRet = KMtoMetre(iValue);

    printf("Distance in Metre : %d",iRet);

    return 0;
}