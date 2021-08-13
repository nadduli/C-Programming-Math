#include <stdio.h>

/**
 * main - prints fibonacci sequence of numbers
 * followed by a newline
 * Return: Always 0 (Success)
 */

int main()
{
	int i, n, a1, a2;
	a1 = 0;
	a2 = 1;

	int next_term = a1 + a2;

	//get number from a user input

	printf("Enter the number of Terms: ");
	scanf("%d", &n);

	// print the first two terms

	printf("Fibonacci series: %d, %d ", a1, a2);

	//print 3rd and nth Terms using a for loop

	for (i = 3; i <= n; i++)
	{
		printf("%d, ", next_term);
		a1 = a2;
		a2 = next_term;
		next_term = a1 + a2;
	}
	return 0;
}
