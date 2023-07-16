#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: input value 1
 * @s2: input value 2
 *
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *cant;
	int i, cl;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	i = cl = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[cl] != '\0')
		cl++;
	cant = malloc(sizeof(char) * (i + cl + 1));
	if (cant == NULL)
		return (NULL);
	i = cl = 0;
	while (s1[i] != '\0')
	{
		cant[i] = s1[i];
		i++;
	}
	while (s2[cl] != '\0')
	{
		cant[i] = s2[cl];
		i++, cl++;
	}
	cant[i] = '\0';
	return (cant);
}
