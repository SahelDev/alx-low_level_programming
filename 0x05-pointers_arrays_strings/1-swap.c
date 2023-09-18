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
	int *q;

	q = a;
	a = b;
	b = q;
	
}

int main(void)
{
	int a = 1;
	int b = 2;

	printf (" \n Avant la fonction SWAP ; a = %d et b = %d ", a, b);
	swap_int(&a, &b);
	printf (" \n Après la fonction SWAP ; a = %d et b = %d ", a, b);
	return (0);

}
