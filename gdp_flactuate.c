#include<stdio.h>
int main()
{
    double y0,y1,y2,f,f1,total_f;

    scanf("%lf%lf",&f,&f1);
    y0=100;
    y1=100+f;
    y2=y1+(y1*f1/100);

    total_f=y2-y0;

    printf("%.6lf",total_f);
    return 0;
}
