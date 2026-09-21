//QUESTION 8: input basic salary, allowance , bonus. Final Salary = Basic Salary + Allowance + Bonus, display final salary till 2 decimal places
#include <stdio.h>
int main()
{
float basic_salary;
float allowance;                 //decimal variables created for basic salary , allowance and bonus 
float bonus;
printf("Enter basic salary:");
scanf("%f",&basic_salary);
printf("Enter allowance:");
scanf("%f",&allowance);                    //decimal inputs are taken for basic salary, allowance and bonus 
printf("Enter bonus:");
scanf("%f",&bonus);
float final_salary = basic_salary+allowance+bonus;   //a new variable called final_salary is created to calculate the final salary 
printf("The final salary is %0.2f",final_salary); // the "0.2" in %0.2f ensures only 2 decimal places get printed in the output
}