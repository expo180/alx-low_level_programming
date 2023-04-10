#include <stdio.h>
/**
 * main - Entry of the program
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
