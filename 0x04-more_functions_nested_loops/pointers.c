#include <stdio.h>

/**
 * main - Deferrencing the value of an integer
 *
 * Return: Success(0)
 */

int main(void)
{
	int m;
	int *p;

	m = 98;
	p = &m;
	*p = 100;
	printf("The memroy address of m is %p\n", p);
	printf("The value of m is %d\n", m);
	return (0);
}
