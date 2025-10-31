#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = 1000 * iNo;

    return iMeter;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);  

    printf("%d Kilometer to meter is : %d",iValue,iRet);

    return 0;
}