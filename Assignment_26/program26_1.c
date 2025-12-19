#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char cValue = '\0'; 

    for(iCnt = 1,cValue = 'A'; iCnt <= iNo; iCnt++,cValue++)
    {
        printf("%c\t",cValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}