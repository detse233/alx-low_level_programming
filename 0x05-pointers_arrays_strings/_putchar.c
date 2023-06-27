#include "main.h"
#include <unistd.h>
/**
 * _putchar - write to stdout
 * @c: character
 *
 * Return: On Succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
