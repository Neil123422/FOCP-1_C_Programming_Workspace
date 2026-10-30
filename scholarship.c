/*A student is eligible for a scholarship if:
• Marks are at least 75
• Attendance is at least 75%
However:
• If marks are 90 or above and attendance is at least 70%, print Special
Scholarship.
• Otherwise, if both normal conditions are satisfied, print Eligible.
• Else print Not Eligible*/
#include <stdio.h>
int main()
{
int marks;
int attendance;                    //input marks and attendance from the student 
printf("Enter your marks:");
scanf("%d",&marks);                            
printf("Enter your attendance (%%):");                                                //scanning of the input 
scanf("%d",&attendance);
if (attendance>100 && marks>100){
    printf("Invalid entries: Marks & Attendance cannot be greater than 100 ");                             //constraints set for invalid inputs , marks and attendance not greater than 100
}
if (marks>=90 && attendance>=70){
    printf("You are eligible for the special scholarship programme.");             //constraints for special scholar; marks>=90 and attendance relaxed to >=70 
}
else if (attendance>=75 && marks>=75){                     //constraints for regular scholarship; marks>=75 and attendance fixed at >=75 
    printf("You are eligible for scholarship.");
}
else {
    printf("You are not eligible for scholarship.");           //if the criteria is not matched, non-eligible response is prompted
}

}
