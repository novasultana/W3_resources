#include<stdio.h>
int main()
{
    int rows,spc,i,j,k;
    printf("Enter Rows: ");
    scanf("%d",&rows);
    spc=rows+2-1;
    for(i=0;i<=rows;i++)
    {
        for(k=spc;k>=1;k--)
        {
            printf(" ");
        }
            for(j=1;j<=i;j++)
            {
                printf("%d ",i);
            }
            printf("\n");
            spc--;
        }
}
