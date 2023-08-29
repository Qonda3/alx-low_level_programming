#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: struct listint_s
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
