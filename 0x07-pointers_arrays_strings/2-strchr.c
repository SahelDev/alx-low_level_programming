#include<stdlib.h>
/**
 * _strchr - a pointer to the first occurence of the character c
 * in the string s or null
 * @s: P1 string s
 * @c: P2 character c
 * Return: a pointer or NULL
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
