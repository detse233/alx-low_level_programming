#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argv: input 1
 * @argc: input 2
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}