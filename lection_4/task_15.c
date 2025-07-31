#include <stdio.h>

// y=k*x+b
int main(void)
{
    int x1, y1, x2, y2;
    float k, b;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    k = (y2*1. - y1) / (x2*1. - x1);
    b = y1 - (k * x1*1.);
    printf("%.2f %.2f\n", k, b);
}