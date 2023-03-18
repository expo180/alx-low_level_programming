#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - takes a random number and checks how is it alongside postive or negative
 * Return: It is the end of the program
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n")
	return (0);
}
