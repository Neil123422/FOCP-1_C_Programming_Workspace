// CALCULATOR
/*
enter 1 = add
enter 2 = sub
enter 3 = multiply
enter 4 = divide
enter 5 = remainder
*/
#include <stdio.h>
int main()
{
    int num1, num2, choice;
    printf("Enter num1:");
    scanf("%d", &num1);
    printf("Enter num2:");
    scanf("%d", &num2);

    printf("CHOOSE YOUR CHOICES:\n(1) for addition\n(2) for subtraction\n(3) for multiplication\n(4) for division\n(5) for getting the remainder ");
    scanf("%d", &choice);
// switch only works for integer and characters
    switch (choice){
    case 1:
        printf("\nThe addition of the following numbers is %d", num1 + num2);
        break;
    case 2:
        printf("\nThe subtraction of the following numbers is %d", num1 - num2);
        break;
    case 3:
        printf("\nThe multiplication of the following numbers is %d", num1 * num2);
        break;
    case 4:
        printf("\nThe division of the following numbers is %f", (float)num1 / num2);
        break;
    case 5:
        printf("\nThe remainder of the following numbers is %d", num1 % num2);
        break;
    default:
        printf("Invalid choice");
    }
}       