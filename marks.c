//QUESTION 7: input marks (out of 100) of 5 subjects, calculate total marks and percentage 
#include <stdio.h>
int main()
{
int sub1;
int sub2;
int sub3;               // integer variables of 5 subjects defined 
int sub4;
int sub5;
printf("Enter marks of sub1:");
scanf("%d",&sub1);
printf("Enter marks of sub2:");
scanf("%d",&sub2);
printf("Enter marks of sub3:");                 //input marks of 5 subjects taken
scanf("%d",&sub3);
printf("Enter marks of sub4:");
scanf("%d",&sub4);
printf("Enter marks of sub5:");
scanf("%d",&sub5);
int total = sub1+sub2+sub3+sub4+sub5;       // variable made for calculating total marks 
float percentage = (total/500.0)*100;  // variable created for calculating the percentage obtained 
printf("Total marks obtained: %d\nPercentage obtained:%f",total,percentage); 
}