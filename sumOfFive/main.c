#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i=0,sum=0;
    printf("enter 5 numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+ a[i];
    }
    printf("the sum total is %d",sum);

    return 0;
}
