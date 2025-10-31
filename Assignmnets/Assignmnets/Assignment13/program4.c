#include<stdio.h>

int  PrintNumber(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iLimit = 0;
    

    printf("Enter number : ");
    scanf("%d",&iLimit);

    printf("%d",PrintNumber(iLimit));

    return 0;
}