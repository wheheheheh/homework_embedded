#include <stdio.h>

void isEqual(int a, int b);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    isEqual(a, b);
    return 0;
}

void isEqual(int a, int b)
{
    if (a > b)
    {
        printf("Above\n");
    } else if (a < b) {
        printf("Less\n");
    } else {
        printf("Equal\n");
    }
}