#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - a new structure named dog
 *@name:P1
 *@age:P2
 *@owner:P3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
