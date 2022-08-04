#include<stdio.h>

int main()
{
    int i=0,j=0,size=0;


    printf("Enter size of array: ");
    scanf("%d",&size);
    int n[size];
    printf("Enter elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Output:");
    for(j=size-1;j>=0;j--)
    {
        printf("%d ",n[j]);
    }

}

