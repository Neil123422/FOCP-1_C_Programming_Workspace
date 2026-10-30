#include <stdio.h>
int countOdds(int low, int high){
    int count = 0;
for (int i=low;i<=high;i++){
    if (i%2!=0) {
     count++;    
    }
   
}
 return count; 
}

int main(){
    int low, high;
    printf("Enter the low and high values: ");
    scanf("%d %d", &low, &high);
    int result = countOdds(low, high);
    printf("Count of odd numbers between %d and %d is: %d\n", low, high, result);
    return 0;
}