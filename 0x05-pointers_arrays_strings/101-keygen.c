#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - generates random valid password
 * Return: 0 if success
 */
int main(void)
{
	int pwd[100];
	int i, som, n;

	som = 0;

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		pwd[i] = rand() % 78;
		som = som + (pwd[i] + '0');
		putchar(pwd[i] + '0');
		if ((2772 - som ) - '0' < 78)
		{
			n = 2772 - som - '0';
			som = som + n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
