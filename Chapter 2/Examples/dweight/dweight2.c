/*
* Name: dweight.c
* Purpose: Finds the dimension weight of a box via user input
* Author: Nicholas Brennan
* Date Written: 1/9/23
*/

#include <stdio.h>

main()
{
  int height, length, width, volume, weight;

  printf("Enter height of the box: ");
  scanf("%d", &height);
  printf("Enter length of the box: ");
  scanf("%d", &length);
  printf("Enter width of the box: ");
  scanf("%d", &width);
  volume = length * width * height;
  weight = (volume + 165) / 166; /* Add 165 to volume to round the number up *
                                  * since integers don't remember decimals   */

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimension weight (in pounds): %d\n", weight);

  return 0;
}