#include <stdio.h>

int middle(int, int);

int main(void) 
{
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    printf("%d\n", middle(a, b));
    return 0;
}

int middle(int a, int b)
{
    return ((a + b) / 2);
}