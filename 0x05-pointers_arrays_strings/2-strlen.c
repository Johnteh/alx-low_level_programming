#include "main.h"
#include <stdio.h>

/**
 * strlen(char *s);- function that returns the length of a string.
 *
 *@s: length of a string
 *
 * Return: Always 0.
 */

void strlen(char *s)
{
int i = 0;
while (s[i] !=0)
{i++;
}
return (i);
}
