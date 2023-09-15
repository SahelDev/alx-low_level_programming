#include "main.h"
#include<stdio.h>

/**
 * _isupper - checks for uppercase
 * @c: parameter 1
 * Return: 1 if c is uppercase otherwise
 *
 */
int _isupper(int c)
{
	int j;

	for (j = 65; j <= 90; j++)
		if (j == c)
			return (1);
	return (0);
}

/**int main(void)
*{
*	char c;
*	
*	c = 'A';
*	printf("%c: %d\n", c, _isupper(c));
*	c = 'a';
*	printf("%c: %d\n", c, _isupper(c));
*	
*	return (0);
*}
*/
