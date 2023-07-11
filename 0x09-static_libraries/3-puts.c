#include "main.h"
#include  <unistd.h>
/**
 * _puts - print string
 * @str: value
 * Return: nothing
 */
void _puts(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
