#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        if(iCnt < 0)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        } 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}