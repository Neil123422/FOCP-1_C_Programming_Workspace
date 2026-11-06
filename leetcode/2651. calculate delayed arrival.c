/* LeetCode 2651 - Calculate Delayed Arrival Time
 * Submit: only the findDelayedArrivalTime() function.
 */
#include <stdio.h>

int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    return (arrivalTime + delayedTime) % 24;
}

/* ---------- LOCAL TEST ONLY (VS Code): delete everything below this line when submitting to the online judge ---------- */
int main(void) {
    int arrival, delay;
    scanf("%d %d", &arrival, &delay);
    printf("%d\n", findDelayedArrivalTime(arrival, delay));
    return 0;
}
