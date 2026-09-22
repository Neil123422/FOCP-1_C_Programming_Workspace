/*An ATM allows withdrawal only when:
• PIN is correct (1234)
• Amount is a multiple of 100
• Amount is less than or equal to balance
• Amount is greater than 0
Given pin, amount, and balance, print:
• Invalid PIN
• Invalid Amount
• Insufficient Balance
• Withdrawal Successful
Implement the program using nested if.*/
#include <stdio.h>

int main()
{
    int pin;
    int amount;
    float bal = 50000.0;
    int correct_pin = 1234; // Set 4-digit PIN

    printf("Enter PIN: ");
    scanf("%d", &pin);

    // Outer if-else: Validate PIN
    if (pin == correct_pin) {
        printf("\nCurrent balance: %.2f", bal);
        printf("\nEnter amount to withdraw: ");
        scanf("%d", &amount);

        // Nested Level 1: Check for valid (positive) amount
        if (amount > 0) {
            
            // Nested Level 2: Check for sufficient balance
            if (amount <= bal) {
                bal -= amount; // Update balance
                printf("\nWithdrawal of %d rs successful\n", amount);
                printf("Remaining balance: %.2f\n", bal);
            } 
            else {
                printf("\nInsufficient balance\n");
            }

        } 
        else {
            printf("\nInvalid amount entered\n");
        }

    } 
    else {
        printf("\nInvalid PIN\n");
    }

    return 0;
}