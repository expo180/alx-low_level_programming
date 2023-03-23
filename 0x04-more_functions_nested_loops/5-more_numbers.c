#include "main.h"
#include "_putchar.c"

/**
 * more_numbers
 *
 * Return: Success(0)
 */

void more_numbers(void)
{
	char i;
	int j;

	for (j = 0; j <= 10; j++)
		for (i = '0'; i <= '9'; i++)
			_putchar(i);
		_putchar('\n');
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
