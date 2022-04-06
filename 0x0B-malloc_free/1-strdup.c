#include <stdlib.h>

/**_strdup - returns a pointer to a newly allocated space in memory.
 *@str : input string.
 *str= null. Return null
 *insufficient memory: Return null.
 *Return pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0, j;

	if ( !str)
		return (NULL);

	while (*(str + i))
		i++;

	i++;

	p = malloc(sizeof(char) * i);

	if (p == NULL)
	{
		return(NULL);
	
	}

	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
