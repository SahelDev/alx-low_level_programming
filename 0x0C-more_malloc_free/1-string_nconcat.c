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
	unsigned int i = 0, j = 0, size = 0, k = 0;
	unsigned int m = 0, p = 0;
	char *ptr;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (j > n)
		j = n;

	size = j + i;
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (p = 0; p < i; p++)
	{
		ptr[k++] = s1[p];
	}
	for (m = 0; m < j; m++)
	{
		ptr[k++] = s2[m];
	}
	ptr[k] = '\0';

	return (ptr);
}
