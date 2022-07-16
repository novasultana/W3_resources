#include<stdio.h>
#include<math.h>
void square(int y);
int main()
{
    int y;
    printf("Enter input: ");
    scanf("%d",&y);
    square(y);
    return 0;
}

void square(int y)
{
    y=pow(y,2);

    printf("Output: %d",y);
}
