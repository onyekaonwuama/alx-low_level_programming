#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints lements of a singly linked list.
 *
 * @h: Pointer to a list.
 *
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int count = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
