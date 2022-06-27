#include<stdio.h>
int main()
{
    int i,j,m,n,rows;
    printf("Enter Number of Rows: ");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++)
    {
        if(i%2==0)
        {
            m=1;
            n=0;
        }
        else{
             m=0;
            n=1;
        }


    for(j=1;j<=i;j++)
    {
         if(j%2==0)
        {
            printf("%d",m);
        }
        else{
             printf("%d",n);
        }

    }
        printf("\n");

}
}
