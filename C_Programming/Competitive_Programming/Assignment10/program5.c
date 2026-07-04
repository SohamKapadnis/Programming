//Write a program which accept area in square feet and convert it into Square metre
//( 1 square feet = 0.0929 Sqare meter )

// Input : 5
// Output : 0.464515

// Input : 7
// Output : 0.650321

#include <stdio.h>

double SquareMetre(int iNo)
{
    double dSqm = 0;

    dSqm = (iNo * 0.0929);

    return dSqm;

}

int main()
{
    int iValue = 0;
    double dRet = 0.0f;

    printf("Enter area in Square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMetre(iValue);

    printf(" Square Metre : %lf",dRet);

    return 0;
}