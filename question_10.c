//QUESTION 10: invoice generator :- input Product ID, Product price, Quantity, Discount percentage
/*
###Calculate the following:
Subtotal = Price × Quantity
Discount Amount = Subtotal × Discount Percentage / 100
Final Amount = Subtotal − Discount Amount
###Display the following details in a properly formatted manner:
Product ID
Subtotal
Discount Amount
Final Payable Amount
*/
#include <stdio.h>
int main()
{
int product_id,quantity;  //quantity and product ID is defined as integer
float product_price,discount_percentage;    // all the prices and discounts are defined as floats 
printf("Enter Product ID:");
scanf("%d",&product_id);
printf("Enter Product price:");
scanf("%f",&product_price);
printf("Enter discount percentage:");                     // all the inputs taken 
scanf("%f",&discount_percentage);
printf("Enter Product quantity:");
scanf("%d",&quantity); 
float subtotal = product_price*quantity;  //float for subtotal amount
float discount_amount = (subtotal)*discount_percentage/100;  //float for discounted amount 
float final_amount = subtotal-discount_amount; // float for final amount 
printf("The Product ID is:%d\nThe Product subtotal is:%f\nThe Product discount amount is:%f\nThe Product final payable amount is%f",product_id,subtotal,discount_amount,final_amount);
}
