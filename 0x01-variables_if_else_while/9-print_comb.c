#include <stdio.h>
/**
 * main - print decimal
 *
 * Return: (0)
 */
int main(void)
{
	char m = '0';

	while (m <= '9')
	{
		putchar(m);
		if (m <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		m++;
	}
	putchar('\n');
	return (0);
}
