//Write a program which accept temperature in fahrenheit and convert it into Celsius
//( 1 celsius = (Fahrenheit - 32) * (5/9))

// Input : 10
// Output : -12.2222 (10-32) * (5/9)

// Input : 34
// Output : 1.1111 (34 - 32) * ( 5/9 )

#include <stdio.h>

double FhtoCs(float fFh)
{
    float fCels = 0;

    fCels = ((fFh - 32.0) * (5.0/9.0)); //if (5/9) returns 0 due to integer Division

    return fCels;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature is Celsius : %f",dRet);

    return 0;
}