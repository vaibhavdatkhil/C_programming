#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
       
        if(iDigit == 0)
        {
            return true;
        }
         iNo = iNo/10;
    }
    return false;
}

int main()
{
    int iVlaue = 0;
    bool bRet = false;

    printf("Enter a number :");
    scanf("%d",&iVlaue);

    bRet = CheckZero(iVlaue);

    if(bRet == true)
    {
        printf("It contains zero");
    }
    else
    {
        printf("It does not contains zero");
    }
    
    return 0;
}