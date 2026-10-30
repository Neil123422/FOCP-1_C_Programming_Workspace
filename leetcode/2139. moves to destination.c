/* To reach a from zero to an integer variable "target" 
you have 2 types of moves; 
1.) increment (num++)---> can be used infinite times
2.) double (num*2)--> has a variable called "maxDoubles" , can only be used the amount of times of the value that is stored inside "maxDoubles". 

FIND THE MINIMUM MOVES TO REACH TARGET FROM 1; 
*/
#include <stdio.h>
int minMoves(long long int target, int maxDoubles) {
    int moves = 0;

    while (target > 1) {
        if (target % 2 != 0) {
            target--;
        } else if (maxDoubles > 0) {
            target /= 2;
            maxDoubles--;
        } else {
            target--;
        }
        moves++;
    }

    return moves;
}
int main(){
    long long int target;
    long long int maxDoubles;

    printf("Enter the target: ");
    scanf("%lld", &target);
    printf("Enter the max doubles: ");
    scanf("%lld", &maxDoubles);

    printf("Minimum moves: %d\n", minMoves(target, maxDoubles));
    return 0;
}