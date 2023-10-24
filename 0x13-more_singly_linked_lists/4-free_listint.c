#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t.
 * @head: a pointer to a node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
