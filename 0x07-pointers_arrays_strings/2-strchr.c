#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * _strchr - locates a character in a string
 *
 * @s: the string to check
 * @c: the character we're looking for
 * Return: a pointer to the first occurance of the character @c in the string
 */
char *_strchr(char *s, char c)
{
	for (; (*s); )
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
