#include "main.h"
#include<stdio.h>

/**
 * 3-islower -checks for lowercase character
 * Return: 1 if lowercase and 0 otherwise
 *
 *
 *
 */

int _isalpha(int c)
{
	int i;
	int j;
	
	for (i = 97; i <= 122; i++)
		if (c == i)
			return (1);
	for (j = 65; j <= 90; j++)
		if (c == j)
			return (1);

	return (0);
	
}


int main (void)
{
int character =	_isalpha('C');
putchar(character + '0');
int character1 = _isalpha('0');
putchar(character1 + '0');
int character2 = _isalpha('a');
putchar(character2 + '0');

}

