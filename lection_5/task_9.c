#include <stdio.h>

int main(void)
{
    int n = 0;
    int currentNumber = 0;
    int countDigits = 0;
    int countEven = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        currentNumber = n % 10;
        ++countDigits;
        if (currentNumber % 2 != 0)
        {
            break;
        } else {
            ++countEven;
        }
        n /= 10;
    }
    countDigits != countEven ? printf("NO\n") : printf("YES\n");
    return 0;
}