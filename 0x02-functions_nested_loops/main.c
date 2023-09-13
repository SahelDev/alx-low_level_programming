#include "main.h"
#include<stdio.h>

/**
 * 3-islower -checks for lowercase character
 * Return: 1 if lowercase and 0 otherwise
 *
 *
 *
 */

int _islower(int c)
{
	int j;
	for(j=97; j <= 122; j++)
	{
		if (c==j)
			return (1);
	}
	return (0);
	
}


int main (void)
{
int character =	_islower('C');
putchar(character + '0');

}

