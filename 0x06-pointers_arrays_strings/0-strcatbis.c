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
	char result[100];
	char *ptr_result = result;
	
	
	while (*dest != '\0')
	{
		*ptr_result = *dest;
		dest++;
		ptr_result++;
	}
	while (*src != '\0')
	{
		*ptr_result = *src;
		src++;
		ptr_result++;
	}
	*ptr_result = '\0';
	while (*ptr_result != '\0')
	{
		putchar(*ptr_result);
	}

	
}


int main(void)
{
	char s1[] = "Hello ";
	char s2[] = "World";
	char *ptr;

	printf("\n %s ", s1);
	printf("\n %s ", s2);
	ptr = _strcat(s1, s2);
	printf("\n %s ", s1);
	printf("\n %s ", s2);
	printf("\n %s ", ptr);
	
	return (0);
}
