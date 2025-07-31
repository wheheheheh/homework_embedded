#include <stdio.h>

void season(int season_number);
int main(void)
{
    int season_number = 0;
    scanf("%d", &season_number);
    season(season_number);
    return 0;
}

void season(int season_number)
{
    if (season_number == 12 || season_number == 1 || season_number == 2)
    {
        printf("winter\n");
    } else if (season_number >= 3 && season_number <= 5) {
        printf("spring\n");
    } else if (season_number >= 6 && season_number <= 8) {
        printf("summer\n");
    } else {
        printf("autumn\n");
    }
}
