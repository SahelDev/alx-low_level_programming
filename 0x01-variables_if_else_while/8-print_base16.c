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
	unsigned char a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	a = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
