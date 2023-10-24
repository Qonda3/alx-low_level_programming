#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t.
 * @head: a pointer to a node.
 * Return: sum of all the data (n) or 0.
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
