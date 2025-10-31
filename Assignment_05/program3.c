#include<stdio.h>

void CheckLeapYear(int year)
{
    if(year % 4 == 0)
    {
        printf("%d is leap year",year);
    }
    else
    {
        printf("%d is not leap year",year);
    }
}

int main()
{
    int yr;
    printf("Enter year :");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
}