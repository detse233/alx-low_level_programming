#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - return pointer to new memory
 * @str: input value
 *
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *ama;
	int i, m;

	m = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ama = malloc(sizeof(char) * (i + 1));
	if (ama == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
		ama[m] = str[m];
	return (ama);
}
