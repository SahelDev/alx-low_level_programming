#include "main.h"
#include<stdlib.h>

/**
 * create_array - function that creates an array of chars, and init
 * with a specific char
 * @size:P1
 * @c:P2 character
 * Return: pointer of array of char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);


	ptr = malloc(size);
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
	return (NULL);
}
