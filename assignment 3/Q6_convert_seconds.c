#include <stdio.h>

int main(void)
{
    unsigned long long totalSeconds;
    unsigned long long hours, minutes, seconds;

    if (scanf("%llu", &totalSeconds) != 1)
        return 1;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%llu %llu %llu\n", hours, minutes, seconds);
    return 0;
}
