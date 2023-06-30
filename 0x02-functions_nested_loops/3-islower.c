#include "main.h"
/**
 * _islower -  lowercase
 * @c: input vale
 *
 * Return: Always 0
 */
int _islower(int c)
{
	char f;
	int low = 0;

	for (f = 'a'; f <= 'z'; f++)
	{
		if (f == c)
		{
			low = 1;
		}
	}
	return (low);
}
