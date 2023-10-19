#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to a header node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	for ( ; h != NULL; )
	{
		if (h->str == NULL)
			printf("[%ld] (nil)\n", num);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
