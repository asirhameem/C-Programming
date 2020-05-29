#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=0,min=0;
    for(i=0;i<10;i++)
    {
        if(max<a[i]){
            max=a[i];}
            if(min>a[i])
            {
                min=a[i];
            }

    }
    printf("the maximum value is %d",max);
    printf("the minimium value is %d",min);

    return 0;
}
