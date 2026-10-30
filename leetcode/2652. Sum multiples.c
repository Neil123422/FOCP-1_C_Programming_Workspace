#include <stdio.h>
int sumOfMultiples(int n) {  // add multiples of 3,5 or 7; 
int sum = 0;
for (int i = 0;i<=n;i++){
    if (i%3==0){ 
    sum+=i; 
    }
 else if (i%5==0){
    sum+=i;     
    }
 else if (i%7==0){
     sum+=i;    
    }
 
}
return sum; 
}
int main(){
int n; 
printf("Enter the number till which you want the odd sums:");
scanf("%d",&n);
printf("The sum of all the odd multiples is: %d",sumOfMultiples(n));
}