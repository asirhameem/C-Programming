#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,temp1,temp2,temp3;
    a=10;
    b=20;
    c=30;
    d=40;
    temp1=a;
    a=b;
    b=temp1;
    printf("after swapping a= %d and b = %d",a,b);
    temp2=b;
    b=c;
    c=temp2;
    printf("after swapping b= %d and c =%d",b,c);




    return 0;
}
