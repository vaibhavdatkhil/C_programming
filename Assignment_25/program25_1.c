#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else if(Arr[iCnt] % 2 != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    return iSumEven - iSumOdd;
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

    iRet = Diffrence(p,iSize);

    printf("Diffrence is :%d",iRet);

    free(p);

    return 0;
}