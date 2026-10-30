#include <stdio.h>
int smallestEvenMultiple(int n) { 
if (n%2==0){
return n; 
} 
else {
    return n*2;
}
}
int main()
{
int n; 
printf("Enter any number");
scanf("%d",&n);
printf("The smallest multiple of 2 & %d is",n,smallestEvenMultiple(n));
}