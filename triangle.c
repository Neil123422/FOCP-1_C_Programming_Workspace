//QUESTION, input angles a,b,c of a triangle and validate triangle sum property, angles cannot be 0 or negative and sum cannot be more or less than 180 degrees. 
#include <stdio.h>
int main()
{
int a;
int b;
int c;
printf("Enter the first angle:");
scanf("%d",&a);
printf("Enter the second angle:");
scanf("%d",&b);
printf("Enter the third angle:");
scanf("%d",&c);
int sum = a+b+c;
if(a<=0 || b<=0){
    printf("invalid argument: angle cannot be less than or equal to zero");
}
else if (c<=0){
    printf("invalid argument: angle cannot be less than or equal to zero");
}

else if (sum == 180){
    printf("This is a valid triangle");
}
else {
printf("Triangle invalid: does not follow angle sum property of triangles");
}
}