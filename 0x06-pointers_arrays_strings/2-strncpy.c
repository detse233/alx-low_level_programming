#include "main.h"
/**
 * _strncpy - copy strings
 * @dest: input value e
 * @src: input value f
 * @n: input n
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int e;

	e = 0;
	while (e < n && src[e] != '\0')
	{
		dest[e] = src[e];
		e++;
	}
	while (e < n)
	{
		dest[1] = '\0';
		e++;
	}
	return (dest);
}
