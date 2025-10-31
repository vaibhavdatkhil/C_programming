#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
       
        if(iDigit == 2)
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

    iRet = CountTwo(iVlaue);

    printf("%d",iRet);

    return 0;
}