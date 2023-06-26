#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap numbers
 * @a: value 1
 * @b: value 2
 *
 * Return: not
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
