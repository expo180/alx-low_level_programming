#include "main.h"

/**
 * _isupper - This function checks if a character is uppercase or not
 * @c: the character to check
 * Return: 1 if c is uppercase
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
