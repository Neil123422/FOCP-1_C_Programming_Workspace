#include <stdio.h>
#include <string.h>

int isAnagram(char* s, char* t) {
    int frequency[26] = {0};
    if (strlen(s) != strlen(t)) return 0;

    for (int i = 0; s[i] != '\0'; i++) frequency[(unsigned char)s[i] - 'a']++;
    for (int i = 0; t[i] != '\0'; i++) {
        if (--frequency[(unsigned char)t[i] - 'a'] < 0) return 0;
    }
    return 1;
}

int main(void) {
    char s[1000], t[1000];
    scanf("%999s %999s", s, t);
    printf("%s\n", isAnagram(s, t) ? "true" : "false");
    return 0;
}
