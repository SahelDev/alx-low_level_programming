#include<stdlib.h>
#include<stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d:struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
		if (d->name == NULL || d->owner == NULL)
			printf("(nil)\n");
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("owner: %s\n", d->owner);
		}
}
