#include <stdio.h>
/**
 * main - prints alphabets in lower case
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char q = 'a';

	while (q <= 'z')
	{
		putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}
