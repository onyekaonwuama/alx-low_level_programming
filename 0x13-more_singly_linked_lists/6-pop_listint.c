#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
