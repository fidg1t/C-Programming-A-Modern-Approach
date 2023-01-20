/*
* Name: scanftest.c
* Purpose: prints out 4 different numbers via printf
* Author: Nicholas Brennan
* Date Written: 1/18/23
*/

#include <stdio.h>

int main(void)
{
  int month, day, year;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %02d%02d%02d", year, month, day);

  return 0;
}