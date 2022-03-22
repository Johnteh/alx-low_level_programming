#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 * 
 * @a: number 1.
 *
 * @b: number 2.
 *
 *Return : 0.
 */
void swap_int(int *a, int *b)
	
{

 	*a = 98;
       *b = 42;
	swap_int(*a, *b);
       
	return (0);
}
