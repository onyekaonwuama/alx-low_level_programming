#include "lists.h"



/**

 * print_list - prints all the elements of a linked list

 * @h: head of the list

 *

 * Return: the number of nodes

 */

size_t print_list(const list_t *h)

{

	const list_t *ptr = h;

	size_t counter = 0;



	while (ptr != NULL)

	{

		if (ptr->str != NULL)

			printf("[%d] %s\n", ptr->len, ptr->str);

		else

			printf("[0] (nil)\n");

		counter += 1;

		ptr = ptr->next;

	}

	return (counter);

}
