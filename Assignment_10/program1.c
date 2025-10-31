#include<stdio.h>

double CircleArea(float fRadius)
{
    double iArea = 0;
    float fPI = 0;
    fPI = 3.14;
    iArea = fPI*fRadius*fRadius;
    return iArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf",dRet);

    return 0;
}