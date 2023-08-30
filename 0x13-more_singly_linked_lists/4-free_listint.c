#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint - frees
 * @head: struct type
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	for (; head != NULL;)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}