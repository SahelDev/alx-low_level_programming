#include <stdio.h>

void first_(void) __attribute__ ((constructor));

/**
 * first - print message before `main' executes
 */
void first_(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
