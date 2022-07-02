#include<stdio.h>
#include<math.h>
int main()
{
    int x,num;
    int i,sum=0,c,t;

    printf("Input x: ");
    scanf("%d",&x);

    printf("Enter term: ");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        c=i*2+1;
        t=pow(x,c);

        sum=sum+t;
    }
    printf("Sum: %d",sum);
}
