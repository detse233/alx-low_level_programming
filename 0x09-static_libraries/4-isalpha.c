#include "main.h"
/**
 * _isalpha - alphabetic
 * @c: input value
 *
 * Return: 1 if low or cap otherwise 0
 */
int _isalpha(int c)
{
	char low;
	char upp;
	
	c = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (upp = 'A'; upp <= 'Z'; upp++)
		{
			if (low == 'c' || upp == 'C')
			{
				c = 1;
			}
		}
	}
	return (c);
}
