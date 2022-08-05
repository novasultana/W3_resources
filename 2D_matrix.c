#include<stdio.h>
int main()
{
    int x[20][20];
    int m,n,i,j;
    printf("Enter size of matrix: ");
    scanf("%d%d",&m,&n);

    printf("Enter elements: \n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
              printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
}
