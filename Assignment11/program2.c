#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid range");
    }
    else{
    for(iCnt = iStart ; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        printf("  %d",iCnt);
        }
    }
}
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter a satrting point :");
    scanf("%d",&iValue1);

     printf("Enter a ending point :");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}