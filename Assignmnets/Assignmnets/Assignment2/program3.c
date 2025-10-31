#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;
}