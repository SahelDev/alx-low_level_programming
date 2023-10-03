#include<stdio.h>
#include<string.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc:P1
 * @argv:P2
 * Return: void
 */
int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);

}
