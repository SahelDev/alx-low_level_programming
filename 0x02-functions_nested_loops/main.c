#include "main.h"
#include<stdio.h>

/**
 * 3-islower -checks for lowercase character
 * Return: 1 if lowercase and 0 otherwise
 *
 *
 *
 */
int print_sign(int n)
{
	if (n>0)
	{
		putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			putchar('-');
			return (-1);
		}
		else
		{
			putchar('0');
			return (0);
		}
	}
}


int main (void)
{
	int r;

	r = print_sign(-1);
	putchar(',');
	putchar(r +'0');
	return (0);


}

