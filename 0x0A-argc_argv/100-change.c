#include<stdlib.h>
#include<stdio.h>
/**
 * main - prints the minimun number of coins to make change
 * for an amount of money
 * @argc:P1
 * @argv:P2
 * Return:void
 */

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	if (cents == 10 || cents == 25 || cents == 1 || cents == 5 || cents == 2)
		printf("1\n");

	




	return (0);
}
