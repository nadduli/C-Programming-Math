#include <stdio.h>

/**
 * main - Compute the quotient and remainder.
 * followed by a newline.
 * Return: Always 0 (success)
 */

int main()
{
  int number, divisor, quotient, remainder;

  printf("Enter the Number: ");
  scanf("%d", &number);
  printf("Enter the divisor: ");
  scanf("%d", &divisor);

  /* performe quotient math */
  quotient = number / divisor;

  /* computes remainder */
  remainder = number % divisor;

  printf("Your value of Quotient = %d\n", quotient);
  printf("Your remainder value = %d\n", remainder);

  return 0;
}
