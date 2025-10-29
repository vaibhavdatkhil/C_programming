#include<stdio.h>

void CheckEvenOdd(int num)
{
    if(num %2 == 0)
    {
        printf("%d is Even number",num);
    }
    else
    {
        printf("%d is Odd number",num);
    }
}

int main()
{
    int number;

    printf("Enter number :");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}