#include<stdio.h>

int main()
{
    int i,j,size;


    printf("Enter size of array: ");
    scanf("%d",&size);
    int n[size];
    printf("Enter elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Output:");
    for(j=0; j<size; j++)
    {
        printf("%d ",n[j]);
    }

}
