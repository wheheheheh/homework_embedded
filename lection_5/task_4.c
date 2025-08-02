#include <stdio.h>

int main(void)
{
    int n = 0;
    int countDigits = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        n /= 10;
        ++countDigits;
    }
    if (countDigits != 3)
    {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
}
