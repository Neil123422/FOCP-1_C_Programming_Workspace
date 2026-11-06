#include <stdio.h>
char* toLowerCase(char* s) {
    for (int i = 0; i<s[i]!='\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }

    return s;
}

int main(void) {
    char text[1000];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    toLowerCase(text);
    printf("Lowercase: %s", text);

    return 0;
}
