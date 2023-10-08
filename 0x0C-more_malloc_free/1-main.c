#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat, *concat1;

    concat = string_nconcat("Best ", "School !!!", 6);
    concat1 = string_nconcat("Best ", "School !!!", 3);
    /*concat2 = string_nconcat("Best ", NULL, 3);*/
    printf("%s\n", concat);
    printf("%s\n", concat1);
    /*printf("%s\n", concat2);*/
    free(concat);
    free(concat1);
    /*free(concat2);*/
    return (0);
}
