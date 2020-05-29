#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10][10];


    int i,j,r,c;


    //printf("Enter the number: \n\n");
    //scanf("%d",&n);

    printf("Enter the number: \n\n");
    scanf("%d",&r);

    printf("Enter the number: \n\n");
    scanf("%d",&c);




    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("arr[%d][%d]: \n");
            scanf("%d %d",&arr[i][j]);
        }
        printf("\n\n");

    }

















    return 0;
}
