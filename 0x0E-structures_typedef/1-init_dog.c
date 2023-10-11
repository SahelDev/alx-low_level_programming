#include "dog.h"
#include<stdlib.h>
/**
 * init_dog- function that initialise a variable of type struct dog
 * @d:P1
 * @name:P2
 * @age:P3
 * @owner:P4
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
