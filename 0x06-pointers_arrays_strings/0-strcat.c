#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strcat - concatenates two strings
 * @dest: P1
 * @src: P2
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char result[100];
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		result[i] = dest[i];
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		result[i+j] = src[j];
	}
	result[i+j] = '\0';
	dest = result;
	return (dest);	
}

