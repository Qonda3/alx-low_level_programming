#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: A pointer to a pointer to the head.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
}
