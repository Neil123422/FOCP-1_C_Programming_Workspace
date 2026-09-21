// input 3 numbers and find the middle value between the greatest and the smallest number 
#include <stdio.h> 
int main()
{
int a,b,c;
printf("Enter the first number");
scanf("%d",&a);
printf("Enter the second number");                            //input 3 numbers and scan their values 
scanf("%d",&b);
printf("Enter the third number");
scanf("%d",&c);
if (a<b && a>c){
    printf("%d is the middle number",a);
}
else if (a<c && a>b){
    printf("%d is the middle number",a);
}
else if (b<a && b>c){
    printf("%d is the middle number",b);                     //constraints set for finding middle numbers in such a way that "num1 << (middle number) << num3" 
}
else if (a<b && c>b){
    printf("%d is the middle number",b);
}
else if (c<b && c>a){
    printf("%d is the middle number",c);
}
else if (c<a && c>b){
    printf("%d is the middle number",c);
}
}