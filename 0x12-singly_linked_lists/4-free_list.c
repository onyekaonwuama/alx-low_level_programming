#include "lists.h"

/**
 *free_list - Frees a list
 *@head: A pointer to the list head
 *
 *Return: void
 */

void free_list(list_t *head)
{
	list_t *temp, *temp2;

	temp = head;

	while (temp != NULL)
	{
		temp2 = temp->next;

		free(temp->str);

		free(temp);

		temp = temp2;
	}
}

