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
	char *n, *o;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	while (name[num] != '\0')
		num++;
	n = malloc(num * sizeof(char));
	if (n == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < num; i++)
		n[i] = name[i];
	dog->name = n;
	dog->age = age;
	num = 0;
	while (owner[num] != '\0')
		num++;
	o = malloc(num * sizeof(char));
	if (o == NULL)
	{
		free(n);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < num; i++)
		o[i] = owner[i];
	dog->owner = o;
	return (dog);
}
