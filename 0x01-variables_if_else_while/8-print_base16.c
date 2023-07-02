#include <stdio.h>
/**
 * main - print base 16
 *
 * Return: (0)
 */
int main(void)
{
	char n;
	char t = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	while (t <= 'f')
	{
		putchar(t);
		t++;
	}
	putchar('\n');
	return (0);
}
