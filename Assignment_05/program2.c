#include<stdio.h>

int FindMax(int a,int b)
{
    if(a > b)
    {
       return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1,num2,result;

    printf("Enter First numbers :");
    scanf("%d",&num1);

    printf("Enter Second numbers :");
    scanf("%d",&num2);

    result = FindMax(num1,num2);
    printf("maximum is :%d\n",result);

    return 0;
}