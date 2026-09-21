//QUESTION 2: input age , height (in meters), grade (in single character) & display using scanf
#include <stdio.h>
int main()
{
int age; // age variable defined as integer datatype 
float height; // height variable defined as float datatype
char grade; // grade variable defined as character datatype 
printf("Enter age :");
scanf("%d",&age);                   
printf("Enter height (in meters) :");                     // printf and scanf are used to input and scan the values for them to be printed later
scanf("%f",&height);
printf("Enter grade :");
scanf(" %c",&grade); // hidden \n causes an input buffer, registering the enter key from the above printf statement and causing the grade to not register. Which is why space is left before %c identifier 
printf("The age of the user is \t\t: %d\n",age);
printf("The height of the user is \t: %f\n",height);                       // values are then printed after the use of scanf function
printf("The grade of the user is \t: %c",grade);
}   // \t are used for right aligning the output 