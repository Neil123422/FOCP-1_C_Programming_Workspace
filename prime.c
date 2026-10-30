//to identify if the input number is prime or not 
#include <stdio.h>
int main()
{
long long int n;
int i; 
printf("Enter the number you want to identify as prime or not:");
scanf("%lld",&n);
for (i=2;i<=n/2;i++){
    if (n%i==0){
        break;
    }
}
if (i==(n/2+1))
{
    printf("It's prime");
}
else {
    printf("It's not prime");
}
}