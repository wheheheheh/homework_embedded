#include <stdio.h>

int main(void)
{
    int n = 0;
    int sumDigits = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        sumDigits += n % 10;
        n /= 10;
    }
    printf("%d\n", sumDigits);
    return 0;
}
