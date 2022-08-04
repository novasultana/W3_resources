#include <stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter size of array : ");
    scanf("%d",&n);
    int array[n];
    printf("\nElements : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Unique elements are :");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(array[i] == array[j] && i != j)
            break;
        }
        if(j == n )
        {
            printf("%d ",array[i]);
        }
    }
    return 0;
}
