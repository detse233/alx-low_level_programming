#include "main.h"
#include <stdio.h>
/**
 *  _strlen - print a lenght
 *  @s: value declared
 *
 *  Return: nothing
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
