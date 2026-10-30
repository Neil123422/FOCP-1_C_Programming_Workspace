//QUESTION: input an integer n, 
/*Example 1
Input: n = 4 Output: 30
Explanation: 1² + 2² + 3² + 4² = 1 + 4 + 9 + 16 = 30. */
/*#include <stdio.h> 
int main()
{
int i = 0;
int n; 
printf("Enter the value till which you want the series printed");                        //CODE TO PRINT THE SQUARE SERIES; 
scanf("%d",&n);

while (i<n){
i++;
printf("%ld,",i*i);                           // %ld is long integer, taken just in case the squaring crosses 10 digits of integer limitations
}
}
*/
#include <stdio.h>
int main()
{
int i=0;
int n;
printf("Enter the value till which you want the series printed");
scanf("%d",&n);
int sum = 0;
for (i=1;i<=n;i++){  //to print the sum of the square series (for loop used)
    sum+=i*i; 
}
printf("sum :%ld",sum); 
}