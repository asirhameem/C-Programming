#include <stdio.h>
#include <stdlib.h>

long factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}




int main()
{
    int n;
    long f;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("factorial of negative value is not existed.");
        else
        {
            f=factorial(n);
            printf("factorial %d!= %f\n");
        }
    }

}
