#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int length = (int)strlen(s);
    int i = length - 1;
    while (i >= 0 && s[i] == ' ') i--;

    int count = 0;
    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }
    return count;
}
int main(void) {
    char sentence[1000] = {0};

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 1;
    }

    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Length of last word: %d\n", lengthOfLastWord(sentence));

    return 0;
}