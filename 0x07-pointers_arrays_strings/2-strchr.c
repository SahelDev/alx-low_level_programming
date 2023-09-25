#include<stdlib.h>
#include "main.h"
/**
 * _strchr - a pointer to the first occurence of the character c
 * in the string s or null
 * @s: P1 string s
 * @c: P2 character c
 * Return: a pointer or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}


















/**
 * _strchr - locates a character in a string
 *
 * @s: the string to check
 * @c: the character we're looking for
 *
 * Return: a pointer to the first occurance of the character @c in the string
 * @s. Return NULL if the character isn't found
 *char *_strchr(char *s, char c)
*{
*	for (; (*s); )
*	{
*		if (*s == c)
*			return (s);
*		s++;
*	}
*
*	return (NULL);
*}
