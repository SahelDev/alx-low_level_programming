#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *	main - compare a number against zero
 *	Return: 0 -if run successfully
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else
	if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
return (0);
}
