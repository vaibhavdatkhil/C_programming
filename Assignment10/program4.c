#include<stdio.h>

double FhtoCs(float fTemp)
{
    double fCs = 0.0;
    fCs = (fTemp - 32 )*(5.0/9.0);
    return fCs;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Fahrenheit to celsius is : %lf",dRet);

    return 0;
}