/*Two players enter:
1 → Rock
2 → Paper
3 → Scissors
Implement a C program using switch and if-else to determine:
• Player 1 Wins
• Player 2 Wins
• Draw
• Invalid Input if either player enters anything other than 1, 2, or 3*/

#include <stdio.h>
int main()
{
int master_choice
int choice1;
int choice2;
printf("(PLAYER 1:\n)"); 
printf("Enter choice :\n (1) Rock\n(2)Paper\n(3)Scissors");
scanf("%d",&choice1);
printf("\n\n\n\n\n\n\n(PLAYER 2:\n)"); 
printf("Enter choice :\n (1) Rock\n(2)Paper\n(3)Scissors");
scanf("%d",&choice2);
switch (master_choice){
    case 1:
    if (choice1 == 1 && choice2 == 2){
        printf("Player 2 wins! ; Rock gets beaten by paper");
    }
    else if (choice1 == 1 && choice2 == 3){
        printf("Player 2 wins! ; Rock gets beaten by paper");
    }
   
}
}