#ifndef _DOG_H
#define _DOG_H
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
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * typedef dog_t-defines a new name for type struct dog
 */
typedef struct dog dog_t;
#endif
