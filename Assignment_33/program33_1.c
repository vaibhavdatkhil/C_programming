#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char cValue1)
{
    if((cValue1 >= 'A' && cValue1 <= 'Z') || (cValue1 >= 'a' && cValue1 <= 'z'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a Charachter : ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}