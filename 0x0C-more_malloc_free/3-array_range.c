#include "main.h"
#include <stdlib.h>
/**
 * *array_range - create an array of integers
 * @min: input value 1
 * @max: input value 2
 *
 * Return: Pointer to new arrays
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
