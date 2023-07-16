#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocate memory
 * @ptr: pointer
 * @old_size: old size of memory
 * @new_size: new size of memory
 *
 * Return: The pointer of new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	char *oldOne;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr2 = malloc(new_size);
	if (!ptr2)
		return (NULL);
	oldOne = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr2[i] = oldOne[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr2[i] = oldOne[i];
	}
	free(ptr);
	return (ptr2);
}
