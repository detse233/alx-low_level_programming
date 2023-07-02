#include <stdio.h>
/**
 * main - print decimal only
 *
 * Return: (0);
 */
int main(void)
{
	int f = '0';

	while (f <= '9')
	{
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
