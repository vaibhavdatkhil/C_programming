#include<stdio.h>

int CountFactors(int iNumber)
{
    int iCnt = 0;
    int iFrquency = 0;

    for(iCnt = 1; iCnt <= (iNumber/2);iCnt++)
    {
        if((iNumber%iCnt) == 0)
        {
            iFrquency++;
        }
    }
    return iFrquency;
}

int main()
{
    int iNumber = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iNumber);

    iRet=CountFactors(iNumber);

    printf("Total count is :%d",iRet);

    return 0;
}