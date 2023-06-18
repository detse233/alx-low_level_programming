#include <stdio.h>
/**
 * main - prints number
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char baseTen = '0';

	while (baseTen <= '9')
	{
		putchar(baseTen);
		baseTen++;
	}
	putchar('\n');
	return (0);
}
