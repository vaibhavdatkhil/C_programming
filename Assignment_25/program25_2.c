#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
           if(Arr[iCnt] % 5 == 0)
           {
                printf("%d\t",Arr[iCnt]);
           }
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

    Display(p,iSize);

    free(p);

    return 0;
}