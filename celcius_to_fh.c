//QUESTION 9: input temp in celcius and convert it into fahrenheit (Fahrenheit = (Celsius × 9 / 5) + 32)
#include <stdio.h>
int main()
{
float celcius;     //float variable for temperature in celcius 
printf("Enter the temperature (in celcius):");
scanf("%f",&celcius);                            //input for temperature in celcius 
float fahrenheit = ((celcius*9)/5)+32;  // float variable fahrenheit created to convert celcius to fahrenheit 
printf("The temperature converted (in fahrenheit) is :%f",fahrenheit);  
}