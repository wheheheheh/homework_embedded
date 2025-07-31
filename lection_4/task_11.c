#include <stdio.h>

int findMin(int a, int b, int c, int d, int e);
int findMax(int a, int b, int c, int d, int e);

int main(void)
{
    int a, b, c, d, e;
    int max_number = 0;
    int min_number = 0;
    int result = 0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    min_number = findMin(a, b, c, d, e);
    max_number = findMax(a, b, c, d, e);
    result = min_number + max_number;
    printf("%d\n", result);
    return 0;
}

int findMin(int a, int b, int c, int d, int e)
{
    if (a < b && a < c && a < d && a < e)
    {
        return a;
    } else if (b < a && b < c && b < d && b < e) {
        return b;
    } else if (c < a && c < b && c < d && c < e) {
        return c;
    } else if (d < a && d < b && d < c && d < e) {
        return d;
    } else {
        return e;
    }
}

int findMax(int a, int b, int c, int d, int e)
{
    if (a > b && a > c && a > d && a > e)
    {
        return a;
    } else if (b > a && b > c && b > d && d > e) {
        return b;
    } else if (c > a && c > b && c > d && c > e) {
        return c;
    } else if (d > a && d > b && d > c && d > e) {
        return d;
    } else {
        return e;
    }
}