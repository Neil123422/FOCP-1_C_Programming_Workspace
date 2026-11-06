#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
bool isPalindrome(char* s) {
    int left = 0;
    int right = 0;
    while (s[right] != '\0') {
        right++;
    }
    right--;
    while (left < right) {
        while (left < right && !isalnum((unsigned char)s[left])) {
            left++;
        }
        while (left < right && !isalnum((unsigned char)s[right])) {
            right--;
        }
        if (tolower((unsigned char)s[left]) !=tolower((unsigned char)s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(void) {
    char input[1000];

    printf("Enter a string: ");

    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1;
    }

    if (isPalindrome(input)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}