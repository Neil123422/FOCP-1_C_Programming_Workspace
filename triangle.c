//QUESTION, input angles a,b,c of a triangle and validate triangle sum property, angles cannot be 0 or negative and sum cannot be more or less than 180 degrees. 
#include <stdio.h>
int main()
{
int a;
int b;
int c;
printf("Enter the first angle:");
scanf("%d",&a);
printf("Enter the second angle:");                               //input and scan all 3 angles 
scanf("%d",&b);
printf("Enter the third angle:");
scanf("%d",&c);
int sum = a+b+c;
if(a<=0 || b<=0){
    printf("invalid argument: angle cannot be less than or equal to zero");
}                                                                                      //setting constaints such that any angle cannot be less than zero 
else if (c<=0){
    printf("invalid argument: angle cannot be less than or equal to zero");
}

else if (sum == 180){
    printf("This is a valid triangle\n");                             //checking the validity of angle sum property of triangles 
    if (a<90 && b<90 && c<90){                              
        printf("Angles are acute");                            //conditons set for acute angled triangle 
    }
else if (a==90 || b==90){
    printf("It is a right angled triangle");
}
else if (c==90){                                              //conditions set for right angled triangle 
    printf("It is a right angled triangle");
}

}
if (a>90 || b>90){
    printf("It is an obtuse angled triangle");
}                                                                        //conditions set for obtuse angled triangle 
if (c>90){
    printf("It is an obtuse angled triangle");
}
if (sum !=180) {
printf("Triangle invalid: does not follow angle sum property of triangles");       //constraint of case where angle sum property is not satisfied 
}

}