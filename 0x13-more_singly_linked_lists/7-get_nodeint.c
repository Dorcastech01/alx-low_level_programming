#include "lists.h"

/**
 * get_nodeint_at_index - this is the main function
 * @head: the head
 * @index: this is the index of the node, starting at 0
 * Description: a function that returns the nth mode of a linked list
 * Return: NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int number;
	listint_t *new_element;

	number = 0;
	new_element = head;

	while (new_element != NULL)
	{
		if (number == index)
			return (new_element);
		number++;
		new_element = new_element->next;
	}

	return (NULL);
}
