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
for (a = 'a'; a <= 'z'; a++)
{
	putchar(a);
}
for (a = 'A'; a <= 'Z'; a++)
{
	putchar(a);
}
putchar(new_line);
}
