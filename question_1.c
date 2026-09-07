//QUESTION 1 : store and display information of students : Student ID , Age , percentage , grade 
#include <stdio.h>
int main()
{
int age = 18,student_id= 404;   // assigned integer datatype for variables of age and student ID
float percentage = 87.0; // assigned float datatype for variable of percentage
char grade = 'A'; // assigned character data type for variable of grade 
printf("The information of the student is as followed:\nStudent ID\t\t= %d\nAge of student\t\t= %d\nPercentage of Student\t= %f\nGrade of Student\t= %c ",student_id,age,percentage,grade);
}
/*
#1 \t is used to tab spaces to right align the output
#2 \n is used to switch lines after fetching each variable
#3 specifiers like %d , %f , %c are used to identify data inside variables that store integers, float and characters respectively
*/