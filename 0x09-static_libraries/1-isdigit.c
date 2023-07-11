#include "main.h"
/**
 * _isdigit - detects number
 *
 * @c: parameter
 * Return: 1 if its a number and 0 if its not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
