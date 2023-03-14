#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the addition of positive numbers,
 *
 * @argc: Count arguments.
 * @argv: Array name.
 *
 * Return: If one of the numbers contains symbols that are not digits return 1.
 *        else return 0
 */

int main(int argc, char *argv[])
{
	int n, b, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (b = 0; argv[n][b] != '\0'; b++)
		{
			if (!isdigit(argv[n][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
