#include<stdio.h>
#include<stdarg.h>
/**
 * sum_them_all- sums of all its parameters
 * @n:P1
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);

	va_end(ap);

	return (sum);
}
