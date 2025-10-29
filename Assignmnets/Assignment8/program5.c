#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    for(int iCnt = 10; iCnt > 0; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}