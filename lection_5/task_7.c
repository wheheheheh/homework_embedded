#include <stdio.h>

int main(void)
{
    int n = 0;
    int currentDigit = 0;
    int lastDigit = 0;
    _Bool flag = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        lastDigit = n % 10;
        int remaing = n / 10;
        while (remaing > 0)
        {
            currentDigit = remaing % 10;
            if (lastDigit == currentDigit)
            {
                flag = 1;
                break;
            }
            remaing /= 10;
        }
        n /= 10;
    }
    flag ? printf("YES\n") : printf("NO\n");
    return 0;
}