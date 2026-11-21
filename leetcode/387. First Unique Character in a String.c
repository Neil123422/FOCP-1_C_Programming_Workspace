#include <stdio.h>
#include <string.h>

int firstUniqChar(char* s) {
    int frequency[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        frequency[(unsigned char)s[i] - 'a']++;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (frequency[(unsigned char)s[i] - 'a'] == 1) return i;
    }
    return -1;
}

int main(void) {
    char s[1000];
    scanf("%999s", s);
    printf("%d\n", firstUniqChar(s));
    return 0;
}
