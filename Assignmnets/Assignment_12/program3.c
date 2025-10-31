#include<stdio.h>

int SumOfFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2);iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iNumber = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iNumber);

    iRet=SumOfFactors(iNumber);

    printf("Sum of all factors  is :%d",iRet); 

    return 0;
}