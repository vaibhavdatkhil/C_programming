#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    for(int iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}