#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if @c is a letter , lowercase ou uppercase and 0 otherwise
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
