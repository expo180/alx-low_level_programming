
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int j;
	char i;

	for (j = 1 ; j <= 10 ; j++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
				_putchar('j');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
