#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0;
    bool bRet = false;

    printf("Enter a number : ");
    scanf("%d",&iValue1);
    
    bRet = CheckEvenOdd(iValue1);

    if(bRet == true)
    {
        printf("%d is even",iValue1);
    }
    else
    {
        printf("%d is odd",iValue1);
    }

    return 0;
}