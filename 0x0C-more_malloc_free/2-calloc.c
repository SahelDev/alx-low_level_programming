#include "main.h"
#include<stdlib.h>
/**
 * _calloc- function that allocates for an array,
 * using malloc
 * @nmemb:P1
 * @size:P2
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = malloc(nmemb * size);

	return (p);
}
