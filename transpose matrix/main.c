#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],trans[10][10],i,j,r,c;
    printf("enter the number of row and coloum for matrix");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0)
            {
                printf("even");
            }
            else
            {
                printf("odd");
            }
        }
        printf("\n");
    }
    printf("the matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n\n");
    }
    for(j=0;j<r;j++)
    {
        for(i=0;i<c;i++)
        {
            trans[j][i] = a[i][j];
        }
    }

    printf(" transposed matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }













    return 0;
}
