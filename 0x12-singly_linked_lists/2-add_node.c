#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t.
 * @head: a pointer to a pointer to the head.
 * @str: needs to be duplicated
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[i] != '\0')
		i++;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
