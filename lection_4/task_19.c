#include <stdio.h>

void isTriangle(int a, int b, int c);

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    isTriangle(a, b, c);
    return 0;
}

void isTriangle(int a, int b, int c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}