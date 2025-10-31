#include<stdio.h>

void  PrintFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
    {
        printf("%d",iCnt);
    }
}

int main()
{
    int iNumber = 0;

    printf("Enter the number :");
    scanf("%d",&iNumber);

    PrintFactors(iNumber);

    return 0;
}