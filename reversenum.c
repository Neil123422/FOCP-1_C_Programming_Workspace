//to input the number and find the reverse of that number 
#include <stdio.h>
int main(){
long long int n;
printf("Enter the number you want to reverse:");
scanf("%lld",&n);
int rem;
while (n>0){
rem = n%10;
n/=10;
printf("%d",rem);   //digits come off from the right, so they print already reversed
}
return 0;
}
