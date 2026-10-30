//to input the number and find the reverse of that number, then check palindrome
#include <stdio.h>
int main(){
    long long int n, original, reversed = 0, rem;
    printf("Enter the number you want to reverse: ");
    scanf("%lld", &n);
    original = n;
    while (n > 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }
    printf("Reversed number: %lld\n", reversed);
    if (original == reversed) {
        printf("%lld is a palindrome\n", original);
    } else {
        printf("%lld is not a palindrome\n", original);
    }
    return 0;
}