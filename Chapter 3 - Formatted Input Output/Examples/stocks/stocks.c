/*
* Name: stocks.c
* Purpose: Computes the value of stock holdings
* Author: Nicholas Brennan
* Date Written: 1/18/23
*/

#include <stdio.h>

int main()
{
  int price, shares;
  float num, denom, value;

  printf("Enter share price (must include a fraction): ");
  scanf("%d%f/%f", &price, &num, &denom);
  printf("Enter number of shares: ");
  scanf("%d", &shares);

  value = (price + num / denom) * shares;

  printf("Value of holdings: $%.2f\n", value);
  
  return 0;
}