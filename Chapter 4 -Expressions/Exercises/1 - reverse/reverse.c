/*!*****************************************************************************
\file    reverse.c
\author  Nicholas Brennan
\date    2-13-2023

\brief
  Asks the user to input a two-digit number, which is then printed reversed.
  
  - main
      Reverses a two-digit number specified by the user
*******************************************************************************/
#include <stdio.h>

int main(void)
{
  int number; /* Initial number inputted by user */
  int tens;   /* The tens place of number        */
  int ones;   /* The ones place of number        */

  /* Prompt the user */
  printf("Enter a two-digit number: ");

  /* Take input from the user */
  scanf("%d", &number);

  /* Reverse the number */
  tens = number / 10; /* Integer divion will give me just the tens place         */
  ones = number % 10; /* Using the modulous operator will give me the ones place */

  /* Print the reversed number */
  printf("The reversal is: %d%d", ones, tens);

  /* Return */
  return 0;
}