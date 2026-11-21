#include <stdio.h>

int main(void) {
    char text[1000];
    scanf("%999s", text);

    int i = 0;
    while (text[i] != '\0') {
        char current = text[i];
        int count = 0;

        while (text[i] != '\0' && text[i] == current) {
            count++;
            i++;
        }
        printf("%c%d", current, count);
    }
    printf("\n");
    return 0;
}
