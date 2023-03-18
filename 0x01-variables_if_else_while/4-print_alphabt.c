#include <stdio.h>
/**
 * main - entry of the program
 *
 * Return: success (0)
 *
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);

}
