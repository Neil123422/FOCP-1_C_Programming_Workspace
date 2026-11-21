#include <stdio.h>
#include <string.h>

int isIsomorphic(char* s, char* t) {
    if (strlen(s) != strlen(t)) return 0;
    int sToT[256] = {0};
    int tToS[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char sc = (unsigned char)s[i];
        unsigned char tc = (unsigned char)t[i];
        if (tc == '\0') return 0;
        if (sToT[sc] == 0) sToT[sc] = tc;
        if (tToS[tc] == 0) tToS[tc] = sc;
        if (sToT[sc] != tc || tToS[tc] != sc) return 0;
    }
    return 1;
}

int main(void) {
    char s[1000], t[1000];
    scanf("%999s %999s", s, t);
    printf("%s\n", isIsomorphic(s, t) ? "true" : "false");
    return 0;
}
