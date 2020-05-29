#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>=80)
    {
        printf("you got A+");
    }
     else if(a>=70)
     {
         printf("you got A");
     }
     else
     {
         printf("fail");
     }
     return 0;
}
