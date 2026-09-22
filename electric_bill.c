//QUESTION: calculate electricity bill based of units consumed : 0-100 = 2rs/unit , 101-200 , 3rs/unit , above 200 is 5rs/unit 
#include <stdio.h>
int main()
{
int unit;
int bill = 0;                                           //bill is 0 initially since it would be incremented 
printf("Enter units of electricity consumed this month:");
scanf("%d",&unit);
if (unit<0){
    printf("units below zero is not valid");
}
if (unit>=0 && unit<=100){
    bill = unit*2;                                      //bill for 1st 100 units 
    printf("The total electricity bill is %d",bill);
} 
else if (unit>100 && unit<=200){
    bill = 200 + (unit-100)*3;                          //bill for the 1st 100 units added into the separate cost of the units after above 100 units 
    printf("The total electricity bill is %d",bill);
}
else {
    bill = 200+300+(unit-200)*5;                      //bill for the 1st & 2nd 100 units added into units that exceed more than 200 units 
    printf("The total electricity bill is %d",bill);
}
}