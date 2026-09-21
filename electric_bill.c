//QUESTION: calculate electricity bill based of units consumed : 0-100 = 2rs/unit , 101-200 , 3rs/unit , above 200 is 4rs/unit 
#include <stdio.h>
int main()
{
int unit;
printf("Enter units of electricity consumed this month:");
scanf("%d",&unit);
if (unit<=100){
    printf("The total electricity bill is %d",unit*2);
}
else if (unit>100 && unit<=200){
    printf("The total electricity bill is %d",unit*3);
}
else {
    printf("The total electricity bill is %d",unit*4);
}
}