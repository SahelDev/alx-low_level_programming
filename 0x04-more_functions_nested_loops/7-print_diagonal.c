#include "main.h"

/**
 * print_diagonal - print \ the number of times 
 * @n: number of times 
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
