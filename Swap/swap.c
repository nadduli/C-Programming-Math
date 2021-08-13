#include <stdio.h>
/**
 * main - swap two numbers using temporarly variables technique
 *      - Swap Numbers Without Using Temporary Variables
 * followed by a newline
 * Return: Always 0 (Success)
 */

int main()
{
	double first, second, temp;
	printf("Enter the first number: ");
	scanf("%lf", &first);

	printf("Enter the second number: ");
	scanf("%lf", &second);

	// first value is assigned to temp variable
	temp = first;

	// first value is assigned to second
	first = second;

	//second value is assigned to temp
	second = temp;

	printf("\nAfter swapping, first number = %.3lf\n", first);
	printf("After swapping, second value = %.3lf\n", second);

	return 0;
}
