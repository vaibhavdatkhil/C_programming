#include<stdio.h>

int FindLargest(int x,int y,int z)
{
    if(x >= y && x >= z)
    {
        return x;
    }
    else if(y >= x && y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a,b,c,result;
    printf("Enter first numbers:");
    scanf("%d",&a);

    printf("Enter second numbers:");
    scanf("%d",&b);

    printf("Enter third numbers:");
    scanf("%d",&c);

    result = FindLargest(a,b,c);

    printf("Largest numbers is:%d\n",result);

    return 0;
}