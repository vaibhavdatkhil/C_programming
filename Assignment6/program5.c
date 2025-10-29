#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    int iPer = 0.0f;

    iPer = (iNo2/iNo1)*100;

    return iPer;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0f;

    printf("please enter first number :");
    scanf("%d",&iValue1);

    printf("please enter second number :");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage : %f",fRet);

    return 0;
}