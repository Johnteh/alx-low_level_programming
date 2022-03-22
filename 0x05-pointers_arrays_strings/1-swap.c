#include "main.h"
#include <stdio.h>

/**
 * 1-swap.c - swaps the values of two integers.
 * 
 * Return: Always 0.
 *
 */
int main( ) 
{
	int a;
	int b;

	a = 98;
	b = 42;
	swap_int(&a, &b);
	return (0);
}
