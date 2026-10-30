#include <stdio.h>
#include <stdbool.h>

bool divisorGame(int n) {
    return n % 2 == 0;
}

int main(){
    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    if (divisorGame(n)) {
        printf("Alice wins.\n");
    } else {
        printf("Alice loses.\n");
    }

    return 0;
}
