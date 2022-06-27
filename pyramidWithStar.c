#include<stdio.h>
int main()
{

    int rows,i,j,k,spc;
    printf("Enter Rows: ");
    scanf("%d",&rows);
    spc=rows+4-1;
    for(i=1;i<=rows;i++)
    {
        for(k=spc;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");

        }
          printf("\n");
          spc--;


    }
}
