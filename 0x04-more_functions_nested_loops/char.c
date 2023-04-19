#include <stdio.h>

/**
 * main - creates a string with array
 *
 * Return: Success(0)
 */

int main(void)
{
	char c[6];

	*(c + 1) = 'b';
	*(c + 2) = 'a';
	*(c + 3) = 'd';
	*(c + 4) = 'e';
	*(c + 5) = 'r';
	printf("%c%c%c%c%c%c\n", c[0], c[1], c[2], c[3], c[4], c[5]);
	return (0);
}
