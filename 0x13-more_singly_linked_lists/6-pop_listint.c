#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: double poiner
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *delete;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	delete = *head;
	*head = (*head)->next;
	free(delete);
	return (n);
}

