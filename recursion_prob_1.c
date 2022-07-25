#include<stdio.h>
int numPrint();
int main()
{
    int n=1;
    printf("The natural Numbers are: \n");

    numPrint(n);
}
int numPrint(n)
{
    if(n<=50)
    {
        printf("%d \n",n);
        numPrint(n+1);
    }
}
