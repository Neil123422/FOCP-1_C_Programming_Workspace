#include <stdio.h> 
#include <string.h>

void reverseString(char* s, int sSize) {
    char temp;

    for (int i = sSize - 1, j = 0; i >= j; i--, j++) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main(void) {
    char s[1000];

    printf("Enter a string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 1;
    }

    s[strcspn(s, "\n")] = '\0';
    reverseString(s, (int)strlen(s));
    printf("Reversed string: %s\n", s);

    return 0;
}