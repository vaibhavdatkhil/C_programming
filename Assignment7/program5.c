#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <= (iNo*5);iCnt++)
    {
        if((iCnt % iNo )== 0) 
        {
            printf("%d\t",iCnt);
        }
    }

/*void MultipleDisplay(int iNo)
{
    for(int i = 1; i <= 5; i++)
    {
        printf("%d\t", iNo * i);
    }
}*/

}

int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;

}