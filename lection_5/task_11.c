#include <stdio.h>

int main(void)
{
    int n = 0;
    int newNumber = 0;
    int lastDigit = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        lastDigit = n % 10;
        newNumber = newNumber * 10 + lastDigit;
        n /= 10;
    }
    printf("%d\n", newNumber);
    return 0;
}