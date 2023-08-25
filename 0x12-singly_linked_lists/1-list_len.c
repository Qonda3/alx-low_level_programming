#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to a struct list_s
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned long int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
