#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: struct listint type
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
