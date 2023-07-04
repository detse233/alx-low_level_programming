#include "main.h"
/**
 * _memcpy - entry point
 * @dest: input value 1
 * @src: input value 2
 * @n: input
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 9; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
