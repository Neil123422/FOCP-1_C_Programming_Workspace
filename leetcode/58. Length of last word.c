#include <stdio.h>
int lengthOfLastWord(char* s) {
int count = 0,i=strlen(s)-1 ; 
while (s[i]==32)
    i--; 
for (;i>=0;i--)
{
    if (s[i]!=32)  //32 is the ASCII value for space/tab; 

    count ++; 
    else if (s[i]==32)
    return count; 
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