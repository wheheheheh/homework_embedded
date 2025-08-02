#include <stdio.h>

int main(void)
{
    int n = 0;
    int currentNumber = 0;
    int countNeedNumber = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        currentNumber = n % 10;
        if (currentNumber == 9)
            ++countNeedNumber;
        n /= 10;
    }
    countNeedNumber != 1 ? printf("NO\n") : printf("YES\n");
    return 0;
}