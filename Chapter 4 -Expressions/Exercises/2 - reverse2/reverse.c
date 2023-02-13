/*!*****************************************************************************
\file    reverse.c
\author  Nicholas Brennan
\date    2-13-2023

\brief
  Asks the user to input a three-digit number, which is then printed reversed.
  
  - main
      Reverses a three-digit number specified by the user
*******************************************************************************/
#include <stdio.h>

int main(void)
{
  int number; /* Initial number inputted by user */
  int hund;   /* The hundreds place of number    */
  int tens;   /* The tens place of number        */
  int ones;   /* The ones place of number        */

  /* Prompt the user */
  printf("Enter a three-digit number: ");

  /* Take input from the user */
  scanf("%d", &number);

  /* Reverse the number */
  hund = number / 100;         /* Integer divion will give  just the hundreds place       */
  tens = (number % 100) / 10;  /* Get just the tens plaec, then  divide it by 10          */
  ones = number % 10;          /* Using the modulous operator will give me the ones place */

  /* Print the reversed number */
  printf("The reversal is: %d%d%d", ones, tens, hund);

  /* Return */
  return 0;
}