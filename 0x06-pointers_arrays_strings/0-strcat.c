#include "main.h"
#include<stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: P1
 * @src: P2
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*dest++ = *src++)
		;
	*dest = '\0';

	return (dest);
}
/**int main(void)
*{
*	char s1[98] = "Hello ";
*	char s2[] = "World!\n";
*	char *ptr;
*	
*	printf("%s\n", s1);
*	printf("%s", s2);
*	ptr = _strcat(s1, s2);
*	printf("%s", s1);
*	printf("%s", s2);
*	printf("%s", ptr);
*
*
*return (0);
*}
*/
