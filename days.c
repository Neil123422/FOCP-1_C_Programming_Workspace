/*Take a number from 1 to 7 and use switch:
1 → Monday
2 → Tuesday
...
7 → Sunday
Along with the day name, print:
• Working Day for Monday–Friday
• Weekend for Saturday–Sunday
For any other number, print Invalid Day.*/
#include <stdio.h>
int main()
{
int n; 
printf("Enter a number (1-7) for a day of the week:");
printf("\n(1)-Monday\n(2)-Tuesday\n(3)-Wednesday\n(4)-Thursday\n(5)-Friday\n(6)-Saturday\n(7)-Sunday");
scanf("%d",&n);
switch(n){
case 1: printf("Monday"); break;
case 2: printf("Tuesday");break;
case 3: printf("Wednesday");break;
case 4: printf("Thursday");break;
case 5: printf("Friday");break;
case 6: printf("Saturday");break;
case 7: printf("Sunday");break;
default : printf("Invalid day");
}
if (n<6){
    printf("Weekday");
}
else{
    printf("Weekend");
}
}