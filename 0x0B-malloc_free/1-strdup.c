#include "main.h"
#include<stdlib.h>
/**
 * _strdup- function that returnsa pointer to a newly allocated space in
 * memory which contains a copy of the string given as parameter
 * @str: P1
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	char *ptr1;

	ptr = malloc(4);
	ptr1 = ptr;

	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while ((*ptr = *str) != '\0')
	{
		str++;
		ptr++;
	}
	return (ptr1);

}
