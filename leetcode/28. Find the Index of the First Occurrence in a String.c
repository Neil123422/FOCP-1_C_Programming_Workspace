#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    int haystackLength = (int)strlen(haystack);
    int needleLength = (int)strlen(needle);

    if (needleLength == 0) return 0;
    for (int i = 0; i + needleLength <= haystackLength; i++) {
        int matched = 1;
        for (int j = 0; j < needleLength; j++) {
            if (haystack[i + j] != needle[j]) {
                matched = 0;
                break;
            }
        }
        if (matched) return i;
    }
    return -1;
}

int main(void) {
    char haystack[1000], needle[1000];
    scanf("%999s %999s", haystack, needle);
    printf("%d\n", strStr(haystack, needle));
    return 0;
}
