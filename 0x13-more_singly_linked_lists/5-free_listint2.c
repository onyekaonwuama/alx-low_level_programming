#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 *
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp1;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp1 = (*head)->next;
		free(*head);
		*head = temp1;
	}
}
