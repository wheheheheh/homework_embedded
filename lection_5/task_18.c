#include <stdio.h>

int main(void)
{
    int n, f1, f2, m;
    scanf("%d", &n);
    f1 = 1;
    f2 = 1;
    if (n == 1)
        printf("1");
    else
        if (n != 0)
        {
            printf("1 1 ");
            for (int i = 2; i < n; ++i){
                m = f1 + f2;
                f1 = f2;
                f2 = m;
                printf("%d ", f2);
            }
        }
    printf("\n");
    return 0;
}