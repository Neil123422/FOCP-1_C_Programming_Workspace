//QUESTION 5: input 2 integers and swap their values using a 3rd variable 
#include <stdio.h> 
int main()
{
int num1; 
int num2;
printf("Enter num1:");
scanf("%d",&num1);
printf("Enter num2:");         //inputting 2 integers 
scanf("%d",&num2);
printf("Before swapping , num1 =%d, num 2=%d\n",num1,num2);  //printing the integers before swapping 
int temp; // temporary variable created for swapping
temp = num1;  // temp var gets the value of num1
num1 = num2; // num1's value changes to what num2's value is 
num2 = temp; // num2's value changes to what num1's value was previously , which is now temp variable's value 
printf("After swapping , num1=%d,num2=%d",num1,num2);    
}