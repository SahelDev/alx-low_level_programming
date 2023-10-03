#include<stdio.h>
#include<stdlib.h>
/**
 * main- program that multiplies two numbers
 * @argc: P1
 * @argv: P2
 * Return: void
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc > 2)
		result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);


	return (0);
}
