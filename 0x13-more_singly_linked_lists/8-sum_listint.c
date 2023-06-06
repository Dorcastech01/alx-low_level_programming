#include "lists.h"

/**
 * sum_listint - this is the main function
 * @head: the head
 * Description: a function that returns the sum of
 * all the data of a linked list
 * Return: 0, if the list is empty
 */

int sum_listint(listint_t *head)
{
	int total;
	listint_t *new_element;

	total = 0;
	new_element = head;

	while (new_element != NULL)
	{
		total += new_element->n;
		new_element = new_element->next;
	}

	return (total);
}
