#include <stdio.h>
#include <string.h>

char* toLowerCase(char* s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (char)(s[i] + ('a' - 'A'));
        }
    }
    return s;
}

int main(void) {
    char text[1000];
    scanf("%999s", text);
    printf("%s\n", toLowerCase(text));
    return 0;
}
