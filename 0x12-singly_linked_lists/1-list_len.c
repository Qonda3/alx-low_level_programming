#include <stddef.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: a pointer to the head on a node.
 * Return: The number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	for ( ; h != NULL; )
	{
		num++;
		h = h->next;
	}
	return (num);
}
