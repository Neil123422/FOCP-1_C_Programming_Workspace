//QUESTION 3: input price of an item and its quantity. find the total bill (total bill = price*quantity)
#include <stdio.h>
int main()
{
int price;
int quantity;                    // defined 2 integer variables price and quantity 
printf("Enter the price of the item:");
scanf("%d",&price);
printf("Enter the quantity of the item purchased:");      // input the values of price and quantity of item purchased 
scanf("%d",&quantity);
printf("The total bill is : %d ",price*quantity);          // print the total bill as per the formula, bill = price*quantity 
}