#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSquareMeter = 0;

    dSquareMeter = 0.0929 * iValue;

    return dSquareMeter;
}


int main()
{
    int iValue = 0.0;
    double dRet = 0.0;

    printf("Enter area on square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("square feet to square meter : %lf",dRet);

    return 0;
}