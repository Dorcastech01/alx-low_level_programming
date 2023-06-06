#include "lists.h"

/**
 * print_listint_safe - this is the main function
 * @head: the head
 * Description: a function that prints a linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new_element;
	size_t number;

	new_element = head;
	number = 0;

	while (new_element != NULL)
	{
		printf("[%p] %d\n", (void *)new_element, new_element->n);
		number++;
		new_element = new_element->next;

		if (new_element >= new_element->next)
		{
			printf("-> [%p] %d\n", (void *)new_element, new_element->n);
			exit(98);
		}
	}
	return (number);
}
