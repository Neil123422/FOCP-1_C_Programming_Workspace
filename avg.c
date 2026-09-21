//QUESTION 4: Implement a C program to accept three integer values and calculate their average. (average should be decimal, input should be int)
#include <stdio.h>
int main()
{
int num1;
int num2;                      //creating 3 integer variables 
int num3;
printf("Enter num1 :");
scanf("%d",&num1);    
printf("Enter num2 :");       //inputting value in the variables 
scanf("%d",&num2);   
printf("Enter num3 :");
scanf("%d",&num3);
int sum = num1+num2+num3;    //adding all the input variables 
float avg = sum/3.0;        // dividing them by 3.0 inside a float variable to get decimated values of averages instead of integers 
printf("The average of the given numbers is : %f",avg);  // using %f container and the avg variable to get the accurate float averages
}