#include<stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j = 0;

	if (size > 0)
	{
		while (j < size)
		{
			for (i = 0; i < size; i++)
				_putchar(35);
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
