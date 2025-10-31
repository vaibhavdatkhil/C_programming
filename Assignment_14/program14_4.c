#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
       
        if(iDigit == 4)
        {
            iCount++;
        }
         iNo = iNo/10;
    }
    return iCount;
}

int main()
{
    int iVlaue = 0;
    int iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iVlaue);

    iRet = CountFour(iVlaue);

    printf("%d",iRet);

    return 0;
}