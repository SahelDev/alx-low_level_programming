#include "main.h"
#include<stdio.h>

/**
 *print_sign -checks sign of number
 *@n: parameter to check
 *Return: 1,-1 or 0 otherwise
 *
 *
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}

