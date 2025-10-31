#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo/10;
    }
    return iMul;
}


int main()
{
    int iVlaue = 0;
    int iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iVlaue);

    iRet = MultDigit(iVlaue);

    printf("%d",iRet);


    return 0;
}