#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create an array of size
 * @size: size of array
 * @c: input value 1
 *
 * Return: Pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *trs;
	unsigned int i;

	trs = malloc(sizeof(char) * size);
	if (size == 0 || trs == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		trs[i] = c;
	return (trs);
}
