#include<stdio.h>
#define MAX 256
int main()
{
    int a[MAX][MAX],b[MAX][MAX],row,column,i,j;
    printf("Please enter row and column:");
    scanf("%d,%d",&row,&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("The matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            b[j][i]=a[i][j];
        }
    }

    printf("Transpose of Matrix:\n");
     for(j=0;j<column;j++)
    {
        for(i=0;i<row;i++)
        {
            printf("%4d",b[j][i]);
        }
        printf("\n");
    }
    return 0;
}
