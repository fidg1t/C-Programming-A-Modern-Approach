/*
* Name: spherevolume.c
* Purpose: Calculates tax for a given value
* Author: Nicholas Brennan
* Date Written: 1/9/23
*/

#include <stdio.h>

int main()
{
  float cost;

  printf("Enter a dollar amount: ");
  scanf("%f", &cost);

  printf("With tax added: %.2f", cost * 1.05);
}