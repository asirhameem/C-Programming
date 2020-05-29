#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,t;
    printf("enter the salary\n");
    scanf("%d",&a);
    b=(a*40)/100;
    printf("the house rent is %d\n",b);
    c=(a*20)/100;
    printf("telephone bill is %d\n",c);
    printf("input extra time:\n");
    scanf("%d",&d);
    e=500*d;
    printf("extra time salary is %d\n",e);
    t=a+b+c+e;
    printf("total salary is %d\n",t);

}
