#include "main.h"
/**
 * _memset - Entry point
 * @s: input value 1
 * @b: input value 2
 * @n: input value 3
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
