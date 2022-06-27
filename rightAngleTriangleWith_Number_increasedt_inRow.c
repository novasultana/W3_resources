#include<stdio.h>
int main()
{
    int rows,i,j,c=1;
    printf("Enter Rows: ");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",c);
            c++;
        }
         printf("\n");
    }

}
