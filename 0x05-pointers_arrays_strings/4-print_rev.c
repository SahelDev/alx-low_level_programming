#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * print_rev - print a string in reverse
 * @s: a string
 * Return: void
 */
void print_rev(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}
	while (s <= p)
	{
		_putchar(*p);
		p = p - 1;
	}
	}
