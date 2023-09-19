#include "main.h"
/**
 * print_array - prints n element of an array of integers
 * @a: p1
 * @n: p2
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == n - 1)
		{
			printf("%d", a[index]);
		}
		else
		{
			printf("%d", a[index]);
			printf(", ");
		}
	}
	printf("\n");
}

