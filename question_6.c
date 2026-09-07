//QUESTION 6: input 2 integers and get their quotients and remainders 
#include <stdio.h>
int main()
{
int dividend;              // defining the dividend 
int divisor;              // defining the divisor 
printf("Enter the divident: ");
scanf("%d",&dividend);
printf("Enter the second divisor: ");     //inputting values for the dividend and divisor 
scanf("%d",&divisor);
int quotient = dividend/divisor;   //dividing divident by the divisor gives the quotient part upon passing this inside an int variable
int remainder = dividend%divisor; // using the modulus operator gives the remainder 
printf("The quotient is :%d\nThe remainder is :%d ",quotient,remainder);  //printing the final values of quotient and remainder 

}