#include<stdio.h>
#include<stdlib.h>
/**
 * main - programs that adds positive numbers
 * @argc : P1
 * @argv : P2
 * Return: void
 */


int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}i
	else
	{

	argc = argc - 1;
	argv++;

	while (argc != 0)
	{
		if (atoi(*argv) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*argv);
		argv++;
		argc = argc - 1;
	}
	printf("%d\n", sum);
	}
	return (0);
}
