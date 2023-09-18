#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two int
 * @a: the variable pointer at a
 * @b: the variable pointer at b
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
