#include <stdio.h>
/**
 * main - prints out alphabet
 * Return: 0 if success
 *
 *
 */
int main(void)
{
char a;
char new_line = '\n';
for (a = 'a'; a <= 'z'; a++)
{
	if ((a == 'q') || (a == 'e'))
		putchar(a);
}
putchar(new_line);
return (0);
}
