/*
* Name: product.c
* Purpose: takes 2 inputs from the user and formats it into product information
* Author: Nicholas Brennan
* Date Written: 1/21/23
*/

#include <stdio.h>

int main(void)
{
  int item, month, day, year;
  float price;

  printf("Enter item number: ");
  scanf("%i", &item);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter purchase date (mm/dd/yy): ");
  scanf("%i/%i/%i", &month, &day, &year);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%i\t\t$%7.2f\t%02i/%02i/%02i", item, price, month, day, year);

  return 0;
}