/*!*****************************************************************************
\file    reverse.c
\author  Nicholas Brennan
\date    2-13-2023

\brief
  Asks the user to input a three-digit number, which is then printed reversed.
  Does this without splitting the number up.
  
  - main
      Reverses a three-digit number specified by the user
*******************************************************************************/

#include <stdio.h>

int main(void)
{
  int hund;   /* The hundreds place of a number */
  int tens;   /* The tens place of a number     */
  int ones;   /* The ones place of a number     */

  /* Prompt the user */
  printf("Enter a three-digit number: ");

  /* Take input from the user */
  scanf("%1d%1d%1d", &hund, &tens, &ones);

  /* Print the reversed number */
  printf("The reversal is: %d%d%d", ones, tens, hund);

  /* Return */
  return 0;
}