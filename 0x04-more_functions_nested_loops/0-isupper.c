#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: parameter 1
 * Return: 1 if c is uppercase otherwise
 *
 */
int _isupper(int c)
{
	int j;

	for (j = 65; j <= 90; j++)
		if (j == c)
			return (1);
	return (0);
}







}
