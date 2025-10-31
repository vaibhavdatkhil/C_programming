#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0 )
    {
        return -1;
    }
    
    int iMul = 0;
    iMul = iNo1 * iNo2 * iNo3;

    return iMul;
     
}

int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0;
    int iRet = 0;

    printf("please enter first number :");
    scanf("%d",&iValue1);

    printf("please enter second number :");
    scanf("%d",&iValue2);

    printf("please enter third number :");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is :%d",iRet);

    return 0;
}