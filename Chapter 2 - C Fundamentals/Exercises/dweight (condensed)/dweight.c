/*
* Name: dweight.c
* Purpose: Finds the dimension weight of a box
* Author: Nicholas Brennan
* Date Written: 1/9/23
*/

#include <stdio.h>

main()
{
  int volume;
  int height = 8;
  int length = 12;
  int width = 10;
  
  volume = length * width * height;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimension weight (in pounds): %d\n", (volume + 165) / 166);

  return 0;
}