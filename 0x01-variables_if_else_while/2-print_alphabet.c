#include <stdio.h>
/**
 * main - prints out alphabet
 * Return: 0 if success
 *
 *
 */

int main(void)
{
char a = 'a';
char z = 'z';
char new_line='\n';
for (; a <= z;)
{	putchar(a);
	a++;
}
putchar(new_line);
return (0);
}
