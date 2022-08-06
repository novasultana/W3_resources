#include <stdio.h>

int lds(int arr[], int n)
{
    int lds[n];
    int i, j, max = 0;

    for (i = 0; i < n; i++)
        lds[i] = 1;

    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            if (arr[i] < arr[j] && lds[i] < lds[j] + 1)
                lds[i] = lds[j] + 1;


    for (i = 0; i < n; i++)
        if (max < lds[i])
            max = lds[i];


    return max;
}

int main()
{
    int i=0,j=0,size=0;
  // int arr[] = { 2,3,1,9,7,6,5,4,8 };
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Length of LDS is %d" ,lds(arr, n));
    return 0;
}
