#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * _calloc - allocates memory for an array.
 * @nmemb: array to be allocated.
 * @size: array size.
 * Return pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;

	if (nnemb == 0 || size == 0)
		return (NULL);


	tab = malloc(size * nnemb);

	if (tab == NULL)
		return (NULL);


	for (i = 0 ; i < (size * nnemb); i++)
		tab[i] = 0;



	return (tab);
}
