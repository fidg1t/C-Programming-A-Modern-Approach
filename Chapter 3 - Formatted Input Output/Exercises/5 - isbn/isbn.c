/*
* Name: isbn.c
* Purpose: Takes an ISBN number from the user and breaks it down
* Author: Nicholas Brennan
* Date Written: 1/21/23
*/

#include <stdio.h>

int main(void)
{
  int lan, pub, num, check;

  printf("Enter ISBN: ");
  scanf("%i-%i-%i-%i", &lan, &pub, &num, &check);

  printf("Language: %01i\nPublisher: %03i\nBook Number: %05i\nCheck digit: %01i", lan, pub, num, check);

  return 0;
}

/* The book asks the user to find a book and test it, but I don't happen to have any library books on me at this time so I cannot */