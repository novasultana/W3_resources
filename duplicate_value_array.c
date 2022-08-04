#include<stdio.h>

int main()
{
    int i,j,size,count=0;


    printf("Enter size of array: ");
    scanf("%d",&size);
    int n[size];
    printf("Enter elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&n[i]);
    }

    for(j=0; j<size; j++)
    {
        if(n[j]==n[j+1])
        {
            count++;
        }
    }
       printf("Output: %d",count);

}
