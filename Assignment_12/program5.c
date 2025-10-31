#include<stdio.h>
#include<stdbool.h>

bool IsDivisibleByFive(int iNo)
{
    if(iNo % 5 == 0)
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
    int iNumber = 0;
    bool bRet = 0;

    printf("Enter the number :");
    scanf("%d",&iNumber);

    bRet = IsDivisibleByFive(iNumber);

    if(bRet == true)
    {
        printf("%d Divisible by Five ",iNumber);
    }
    else
    {
        printf("%d Not Divisible by Five ",iNumber);
    }

    return 0;
}