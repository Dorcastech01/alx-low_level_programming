#include "lists.h"

/**
 * delete_nodeint_at_index - this is the main function
 * @head: the head
 * @index: is the index of the node that should be deleted
 * Description: a function that deletes the node at a specified index
 * of a linked list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_element, *old_element;
	unsigned int number;

	if (head == NULL || *head == NULL)
		return (-1);
	new_element = *head;
	old_element = NULL;
	number = 0;

	if (index == 0)
	{
		*head = new_element->next;
		free(new_element);
		return (1);
	}
	while (new_element != NULL && number < index)
	{
		old_element = new_element;
		new_element = new_element->next;
		number++;
	}
	if (new_element == NULL)
		return (-1);
	old_element->next = new_element->next;
	free(new_element);
	return (1);
}
