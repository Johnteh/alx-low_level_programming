#include "main.h"
/**
 * int factorial - returns the factorial
 * @n < 0: return -1.
 *Return:factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return 1;
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
