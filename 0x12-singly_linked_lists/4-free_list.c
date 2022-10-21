#include "lists.h"

/**
 *free_list - Frees a list
 *@head: A pointer to the list head
 *
 */

void free_list(list_t *head)
{
	while (head)
	{
		temp = head->next;

		free(head->str);

		free(head);

		head = temp;
	}
}
