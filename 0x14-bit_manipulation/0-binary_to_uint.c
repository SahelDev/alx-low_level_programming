#include "main.h"
/**
 * binary_to_uint-converts a binary number to an uint
 * @b:string of 0 and 1
 * Return: converted number or 0
 */


unsigned int binary_to_uint(const char *b)
{

	unsigned int unint;
	int taille, base_two;

	if (!b)
		return (0);

	unint = 0;

	for (taille = 0; b[taille] != '\0'; taille++)
		;

	for (taille--, base_two = 1; taille >= 0; taille--, base_two *= 2)
	{
		if (b[taille] != '0' && b[taille] != '1')
		{
			return (0);
		}

		if (b[taille] & 1)
		{
			unint += base_two;
		}
	}

	return (unint);


}
