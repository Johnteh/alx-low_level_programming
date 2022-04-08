#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked: allocates memory.
 *@b: size of memory to be allocated
 * Returns a pointer
 *
 */

void *malloc_checked(unsigned int b)
{
	char *p;


	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
		return (NULL);
	
	}
	RETURN (P);
}
