#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 8.30 AM");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9.20 AM");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("Invalid Division");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a Charachter : ");
    scanf("%c",&cValue);
    
    DisplaySchedule(cValue);

    return 0;
}