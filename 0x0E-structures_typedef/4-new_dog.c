#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: typedef dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int num = 0, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[num] != '\0')
		num++;
	dog->name = malloc(num * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < num; i++)
		dog->name[i] = name[i];
	num = 0;
	while (owner[num] != '\0')
		num++;
	dog->owner = malloc(num * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (i = 0; i < num; i++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}
