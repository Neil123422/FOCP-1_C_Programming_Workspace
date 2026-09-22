//input character, print vowels for uppercase/lowercase aeiou else print consonant, digit if 0-9, else print special character
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if alphabet using logical operators || and &&
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        // Use switch to check for vowels vs consonants
        switch (ch) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
            break;
        }
    }
    // Check if digit using logical operator &&
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // All other characters
    else {
        printf("Special Character\n");
    }

    return 0;
}
