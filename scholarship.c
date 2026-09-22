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
int attendance;
printf("Enter your marks:");
scanf("%d",&marks);
printf("Enter your attendance (%%):");
scanf("%d",&attendance);
if (attendance>100 && marks>100){
    printf("Invalid entries: Marks & Attendance cannot be greater than 100 ");
}
if (marks>=90 && attendance>=70){
    printf("You are eligible for the special scholarship programme.");
}
else if (attendance>=75 && marks>=75){
    printf("You are eligible for scholarship.");
}
else {
    printf("You are not eligible for scholarship.");
}

}
