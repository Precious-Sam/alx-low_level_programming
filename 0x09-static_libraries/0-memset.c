#include "main.h"

/**
 * *_memset - Fills a block of memory with specific value
 * @s: A pointer to the memory area to be filled.
 * @b: The char to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: string @s, pointer to memory string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
