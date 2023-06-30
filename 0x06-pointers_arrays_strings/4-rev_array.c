#include "main.h"
#include <stdio.h>
/**
 * reverse_array - print in reverse
 * @a: value input 1
 * @n: value input 2
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int w;
	int q;

	for (w = 0; w < n--; w++)
	{
		q = a[w];
		a[w] = a[n];
		a[n] = q;
	}
}
