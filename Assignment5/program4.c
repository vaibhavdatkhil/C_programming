#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("%d is a positive number",num);
    }
    else if(num < 0)
    {
        printf("%d is a negative number",num);
    }
    else
    {
        printf("%d is a Zero number",num);
    }
}

int main()
{
    int number;
    printf ("Enter number :");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}