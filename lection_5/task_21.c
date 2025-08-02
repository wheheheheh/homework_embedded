#include <stdio.h>

int main(void) {
    int c;
    while ((c = getchar()) != '.') {
        putchar((c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c); 
    }
    printf("\n");
    return 0;
}