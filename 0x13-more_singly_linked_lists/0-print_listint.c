#include "lists.h"

/**
 * print_listint - this is the main function
 * @h: the pointer
 * Description: a function that prints all the elements of a linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number;

	number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
