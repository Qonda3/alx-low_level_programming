#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: a pointer
 * @name: a pointer to a char
 * @age: a float var
 * @owner: a pointer to char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
