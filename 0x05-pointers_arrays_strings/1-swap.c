#include "main.h"
/**
 * swap_int - swaps two integer values
 * @a: first input
 * @b: second input
 */

void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}

