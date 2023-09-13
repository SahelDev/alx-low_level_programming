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
	int i;
	int n;
	
	for (i = 10; i <= 19; i++)
	{ 
		n = i % 10;
		putchar('0');
		putchar('0');
		putchar(':');
		putchar('0');
		putchar('0'+ n);
		putchar('\n');
	}

}

