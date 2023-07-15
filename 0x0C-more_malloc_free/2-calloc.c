#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: input value 1
 * @b: input value 2
 * @n: integer
 *
 * Return: Pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * *_calloc - allocates memmory
 * @nmemb: number of elements in the array
 * @size: size of the element
 *
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
