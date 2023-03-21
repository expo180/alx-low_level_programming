#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet
 */
void print_alphabet_x10(void)
{
	int c;
	int i;

	i = 0;
	for (c = 'a'; c <= 'z'; i++)
		while (i <= 9)
			putchar(c);
			i++;
	putchar('\n');

}
