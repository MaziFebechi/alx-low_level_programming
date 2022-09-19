#include "main.h"
/**
 * swap_int - swaps value
 * @a: parameters
 * @b: parameters
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
