#include <stdio.h>

int findMax(int a, int b, int c);

int main(void)
{
    int num = 0;
    int hundred, ten, one, max_;
    scanf("%d", &num);
    hundred = num / 100;
    ten = num % 10 / 10;
    one = num % 10;
    printf("%d\n", findMax(hundred, ten, one));
    return 0;
}

int findMax(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}