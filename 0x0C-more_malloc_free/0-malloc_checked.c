#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory
 * @b: input 1
 *
 * Return: a pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
