#include <stdio.h>

int main(void) {
    long long totalSeconds;
    scanf("%lld", &totalSeconds);

    long long hours = totalSeconds / 3600;
    long long minutes = (totalSeconds % 3600) / 60;
    long long seconds = totalSeconds % 60;

    printf("%lld %lld %lld\n", hours, minutes, seconds);
    return 0;
}
