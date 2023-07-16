#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * simple_print_buffer - print buffer in hex
 * @buffer: simple_print_buffer
 * @size: the size of the memory to print
 *
 * Return: Nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (1 % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * 10);
	p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
	i = 0;
	while (i < 98)
	{
		p[i++] = 98;
	}
	simple_print_buffer(p, 98);
	free(p);
	return (0);
}
