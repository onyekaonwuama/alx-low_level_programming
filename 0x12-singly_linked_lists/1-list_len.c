#include "lists.h"

/**
 * list_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)

{

	const list_t *ptr = h;

	size_t counter = 0;

	while (ptr != NULL)

	{
		counter += 1;

		ptr = ptr->next;
	}
	return (counter);
}

