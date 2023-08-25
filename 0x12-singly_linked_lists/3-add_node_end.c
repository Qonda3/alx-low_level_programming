#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer
 * @str: array of characters
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = strlen(str);
	add->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		*head = add;
		return (*head);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add;
	}
	return (add);
}
