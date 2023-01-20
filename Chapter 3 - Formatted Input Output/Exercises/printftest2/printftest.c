/*
* Name: printftest.c
* Purpose: prints out 4 different numbers via printf
* Author: Nicholas Brennan
* Date Written: 1/18/23
*/

#include <stdio.h>

int main(void)
{
  float x = 10;

  printf("%-8.1e", x);
  printf("%10.6e", x);
  printf("%8.3f", x);
  printf("%6.0f", x);

  return 0;
}