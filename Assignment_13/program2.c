#include<stdio.h>

void PrintNumber(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("  %d",iCnt);
        }
    }
}

int main()
{
    int iLimit = 0;

    printf("Enter number : ");
    scanf("%d",&iLimit);

    PrintNumber(iLimit);

    return 0;
}