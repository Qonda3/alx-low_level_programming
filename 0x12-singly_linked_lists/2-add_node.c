#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer
 * @str: string variable
 * Return: address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = strlen(str);
	add->next = *head;
	*head = add;

	return (*head);
}
