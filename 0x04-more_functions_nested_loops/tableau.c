#include <stdio.h>

/**
 * main - Creating an array and assigning value to these variables
 *
 * Return: Success(0)
 */

int main(void)
{
	int tableau[5];

	*(tableau + 1) = 1;
	printf("The first value of in the array is %d\n", *(tableau + 1));
	printf("The address in memory for the first value in the array is %p\n", &(*(tableau + 1)));
	return (0);
}
