#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    int iNo = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];   
        iSum = 0;         
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;     
            iSum = iSum + iDigit;  
            iNo = iNo / 10;     
        }

        printf("%d\t", iSum);     
    }
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue =0l;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter the %d element : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);

    return 0;
}