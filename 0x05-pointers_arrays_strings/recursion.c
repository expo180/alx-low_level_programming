#include <stdio.h>
#include "main.h"

/**
 * factorial - This function returns the factorial of a number
 * @n: is the number
 * Return: 1 if n is equal to 0 and factorial otherwise
 */
 int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

/**
 * main - Entry of the main function
 *
 * Return: Success(0)
 */
int main(void)
{
	printf("%d\n",factorial(15));
	return (0);
}
