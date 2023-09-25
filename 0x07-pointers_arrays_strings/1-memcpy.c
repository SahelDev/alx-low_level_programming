#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest:P1
 * @src:P2
 * @n:P3
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for ( i = 0 ; i < n; i++)
	{
		dest[i] = src[i];	
	
	}
	return (dest);
}
