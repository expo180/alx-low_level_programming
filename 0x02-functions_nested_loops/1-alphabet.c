#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry of the program
 *
 * Return: Success(0)
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}
