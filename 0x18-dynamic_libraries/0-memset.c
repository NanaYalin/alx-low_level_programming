#include "main.h"

/**
 * _memset - fills a memory block with a constant byte.
 * @s: source string
 * @b: the constant byte for filling
 * @n: lenght of the buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
