#include "main.h"
/**
 * print_alphabet - print alpha in lowercase
 * Return: On success 1
 */
void print_alphabet(void)
{
	char lowc;

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	{
		_putchar(lowc);
	}
	_putchar('\n');
}
