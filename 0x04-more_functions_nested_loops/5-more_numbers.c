#include "main.h"
#include<stdio.h>

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return : void
 */

void more_numbers(void)
{
	int j;
	int i;
	int k;
for (k = 0; k < 10; k++)
{	

	for (j = 0; j <= 9; j++)
		putchar('0' + j%10);
	for (i = 10; i <= 14; i++)
	{
		putchar('0' + 1);
		putchar('0' + i%10);
	}

	putchar('\n');
}
}

int main (void)
{
	more_numbers();

	return (0);
}
