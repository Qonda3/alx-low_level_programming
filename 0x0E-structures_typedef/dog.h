#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a new type struct
 * @name: pointer to a char
 * @age: float var
 * @owner: pointer to a char
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
