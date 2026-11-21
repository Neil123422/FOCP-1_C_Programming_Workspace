#include <stdio.h>

int main(void) {
    char ch;
    char word[100];
    char sentence[1000];

    scanf("%c", &ch);
    scanf("%s", word);
    scanf(" %[^\n]", sentence);

    printf("%c\n%s\n%s\n", ch, word, sentence);
    return 0;
}
