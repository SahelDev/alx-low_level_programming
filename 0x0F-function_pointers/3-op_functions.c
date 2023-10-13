#include<stdlib.h>
#include "3-calc.h"
#include<stdio.h>

/**
 *op_add- sum of a and b
 *@a:P1
 *@b:P2
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub- difference of a and b
*@a:P1
*@b:P2
*Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul- product of a and b
 *@a:P1
 *@b:P2
 *Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div- div of a and b
 *@a:P1
 *@b:P2
 *Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod- remaider of a and b
 * @a:P1
 * @b:P2
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
