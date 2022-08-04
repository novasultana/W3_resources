
#include<stdio.h>

int main()
{
    int i,j,size,sum=0;

    printf("Enter size of array: ");
    scanf("%d",&size);
    int n[size];
    printf("Enter elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&n[i]);
        sum+=n[i];
    }
    printf("Sum:%d",sum);

}
