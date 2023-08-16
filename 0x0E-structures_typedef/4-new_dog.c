#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: pointer to a char
 * @age: float var
 * @owner: pointer to a char
 * Return: a pointer to a struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	(*n_dog).name = name;
	(*n_dog).age = age;
	(*n_dog).owner = owner;
	return (n_dog);
}
