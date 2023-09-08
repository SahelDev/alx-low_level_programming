#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints out alphabet
 * Return: 0 if success
 *
 *
 */

int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
