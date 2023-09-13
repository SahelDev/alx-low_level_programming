#include "main.h"
/**
 * print_sign- function that prints the sign of a number
 * @n: the number to check
 * Return: 1 0 or -1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
		}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
