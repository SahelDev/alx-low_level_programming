#include "main.h"
#include<stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a : parameter1
 * @b : parameter2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
