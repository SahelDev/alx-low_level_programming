#include "main.h"
#include<stdio.h>

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return : void
 */

void more_numbers(void)
{
	int j;
	int k;


	for (k = 0; k < 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else
				_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
