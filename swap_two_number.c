#include<stdio.h>
void swap();
int main()
{
    int a,b,temp;

    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    swap(a,b);


}

swap(int a,int b,int temp)
{

    temp=a;
    a=b;
    b=temp;

    printf("Output : %d %d",a,b);
}
