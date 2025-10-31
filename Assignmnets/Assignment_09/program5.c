#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    int iMul1 = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        if( (iCnt % 2) == 0)
        {
            iMul = iMul * iCnt;
        }
        else
        {
            iMul1 = iMul1 * iCnt;
        }

        iDiff = iMul - iMul1;
    }
    return iDiff;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);  

    printf("Factorial diffrence is : %d",iRet);

    return 0;
}