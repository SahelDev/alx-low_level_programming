#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(p);
		p++;
	}
}
