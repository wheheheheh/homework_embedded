#include <stdio.h>

int main(void)
{
    int n = 0;
    int currentDigit = 0;
    int lastDigit = 0;
    int countEqual = 0;
    int countDigits = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        lastDigit = n % 10;
        ++countDigits;
        n /= 10;
        currentDigit = n % 10;
        if (currentDigit <= lastDigit){
            ++countEqual;
        } else {
            break;
        }
    }
    countDigits != countEqual ? printf("NO\n") : printf("YES\n");
    return 0;
}