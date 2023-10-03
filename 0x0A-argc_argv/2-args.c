#include<stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc:P1
 * @argv:P2
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
