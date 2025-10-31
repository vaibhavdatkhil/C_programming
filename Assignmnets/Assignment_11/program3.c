#include<stdio.h>

int RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iEnd < iStart || iStart < 0 )
    {
        printf("Invalid range");
        return 0;
    }
    
    for(iCnt = iStart ; iCnt <= iEnd; iCnt++)
        {
        iSum = iSum + iCnt;
        }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter a satrting point :");
    scanf("%d",&iValue1);

     printf("Enter a ending point :");
    scanf("%d",&iValue2);

    iRet = RangeDisplay(iValue1,iValue2);

    if(iRet > 0)
    {
        printf("Addition of all numbers is :%d",iRet);
    }

    

    return 0;
}