#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * string_nconcat- function that concatenates two strings
 * @s1:P1
 * @s2:P2
 * @n:P3
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size = 0;
	char *ptr, *ptr2;
	char *s12, *s22;
	unsigned int flag = 1;

	s12 = s1;
	s22 = s2;
	
	while (*s1 != '\0')
	{
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		j++;
		s2++;
	}
	size = n + i;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	ptr2 = ptr;
	while (*s12 != '\0')
	{
		*ptr = *s12;
		ptr++;
		s12++;
	}
	if (s2 == NULL)
		return (s12);
	if (n < j)
	{
		while (flag <= n)
		{
			*ptr = *s22;
			ptr++;
			s22++;
			flag++;
		}
		ptr[n+1] = '\0';
	}
	else
	{
		while (flag <= n)
		{
			*ptr = *s22;
			ptr++;
			s22++;
			flag++;
		}
	}
	return (ptr2);
}
