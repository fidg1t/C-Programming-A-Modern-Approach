/*
* Name: dweight.c
* Purpose: Finds the dimension weight of a box
* Author: Nicholas Brennan
* Date Written: 1/9/23
*/

#include <stdio.h>

main()
{
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;
  volume = length * width * height;
  weight = (volume + 165) / 166; /* Add 165 to volume to round the number up *
                                  * since integers don't remember decimals   */

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimension weight (in pounds): %d\n", weight);

  return 0;
}