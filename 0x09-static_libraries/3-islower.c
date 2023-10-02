#include "main.h"

/**
 * _islower -checks for lowercase character
 * Return: 1 if lowercase and 0 otherwise
 *@c : character to be check
 *
 *
 */

int _islower(int c)
{
	int j;

	for (j = 97; j <= 122; j++)
	{
		if (c == j)
			return (1);
	}
	return (0);
}


