#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string to print
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}

