#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax = 0;
    int iMin = 0;

    iMax = Arr[0];
    iMin = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }

        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }

    }

    return iMax-iMin;
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

    printf("Samllest Number is : %d",iRet);

    free(p);

    return 0;
}