#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints out alphabet
 * Return: 0 if success
 *
 *
 */
int main(void)
{
char new_line = '\n';
char a;
for (a = 'z'; a >= 'a'; a--)
{
	putchar(a);
}
putchar(new_line);
return (0);
}
