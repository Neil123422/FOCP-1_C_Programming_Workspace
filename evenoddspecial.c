//QUESTION: takes value of an integer n, if n % 2 && 5 == 0 print special , if n % 2 == 0 (even), if n % 5 == 0 (print five) , else print odd
#include <stdio.h>
int main()
{
int n;                                 // variable defined 
printf("Enter any number:");                       
                                          //variable input and scanning 
scanf("%d",&n);
if (n%2==0 && n%5==0){                             // set condition for numbers divisible by both 2 and 5 to be "special"
    printf("The number is special");
}
else if (n%2==0){                          // set conditions for divisibility of 2 to be an even number
    printf("The number is even");
}
else if (n%5==0){                         // set conditions for divisibility of 5 
    printf("The number is a multiple of five");
}
else{
    printf("The number is odd and not a multiple of 5"); // set condition for all the odd numbers other than the multiple of 5 to be labelled as odd 
}
}