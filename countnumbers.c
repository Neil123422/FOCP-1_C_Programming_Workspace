//QUESTION: count the number of digits of the number using while 
#include <stdio.h>
int main()
{
long long int n; 
printf("Enter the number and the number of digits will be shown:");
scanf("%lld",&n);
int count=0,rem;
while (n>0){
rem=n%10;
count++;
n/=10;
printf("%d",rem);
}
printf("\nTotal number of digits:%d",count);
}