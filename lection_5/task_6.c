#include <stdio.h>

int main(void)
{
    int n = 0;
    int last = 0; 
    int current = 0;
    _Bool flag = 0;
    scanf("%d", &n);
    while(n > 0)
    {
        last = n % 10;
        n /= 10;
        current = n % 10;
        if (last == current)
        {
            flag = 1;
            break;
        }
    }
    flag ? printf("YES\n") : printf("NO\n");
    return 0;
}