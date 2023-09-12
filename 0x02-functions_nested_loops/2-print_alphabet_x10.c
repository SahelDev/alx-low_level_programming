#include "main.h"

/**
 * print_alphabet - prints out alphabet  x10,in lowercase
 * Return: always 0
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int j = 1;
while (j <= 10)
{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	j++;
}
}
