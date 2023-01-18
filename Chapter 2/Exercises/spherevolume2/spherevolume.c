/*
* Name: spherevolume.c
* Purpose: Finds the volume of a sphere with a radius specified by the user
* Author: Nicholas Brennan
* Date Written: 1/9/23
*/

#include <stdio.h>

int main()
{
  int r;

  printf("Input radius: ");
  scanf("%d", &r);

  printf("Volume: %.2f", (4.0f / 3.0f) * 3.14f * (r * r * r));
  return 0;
}