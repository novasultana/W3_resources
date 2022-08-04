#include<stdio.h>
#define N 100

int main()
{
    int num[N];
    int temp;
    int i, n, j;
    printf("\nHow many number you want to enter: ");
    scanf("%d", &n);

    printf("\nEnter a list of numbers to see all patterns:\n");

     //input

    for (i = 0 ; i < n; i++)
        scanf("%d", &num[i]);

    printf("Output: \n");

    for (j = 1; j <= n; j++)
    {
        for (i = 0; i < n-1; i++)
        {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            int i;

            //print sequence
            for ( i = 0 ; i < n ; i++)
                printf("%d ", num[i]);
            printf("\n");
        }
    }
    return 0;
}
