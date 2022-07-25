#include<stdio.h>
int SumNumber(n);
int main()
{
    int n;
    printf("Enter Last number:");
    scanf("%d",&n);
    SumNumber(n);
}
int SumNumber(n)
{
    int i=0,sum=0;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum is: %d ",sum);
}
