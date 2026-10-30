//QUESTION: input a non negative integer , returning its factorial 

/*Q2. Factorial of a Number
Given a non-negative integer n, return its factorial, defined as:
n! = n × (n-1) × (n-2) × ... × 1
By definition, 0! = 1.
Example 1
Input: n = 5 Output: 120
Explanation: 5! = 5 × 4 × 3 × 2 × 1 = 120.
Example 2
Input: n = 0 Output: 1
Explanation: 0! is defined as 1.
Example 3
Input: n = 1 Output: 1
Input Format
A single integer n.
Output Format
Print a single integer, the factorial of n.
Constraints
• 0 <= n <= 20
• The result fits in a 64-bit signed integer (long long).
Test Cases
# Scenario Input Expected Output
1 Zero (special case) 0 1
2 One (base case) 1 1
3 Small typical value 5 120
4 Value where result exceeds 32-bit int range 13 6227020800
5 Maximum constraint value 20 2432902008176640000*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number you want the factorial of");
scanf("%d",&n);
long long factorial = 1;   // %lld / long long used because 13! and above overflow int
for (int i = 2; i <= n; i++)
{
    factorial *= i;
    printf("%d x ", i);    // prints the series step by step, like squareseries.c
}
printf("1 = %lld", factorial);
return 0;
}
