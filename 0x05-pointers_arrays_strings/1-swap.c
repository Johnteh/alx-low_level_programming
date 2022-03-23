#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: first integer
 *
 * @b: second integer
 *
 *
 */
void swap_int(int *a, int *b)

{
	int tempnum;

        tempnum = 0;
	tempnum = *a;
	*a =*b;
	*b = tempnum;
}

