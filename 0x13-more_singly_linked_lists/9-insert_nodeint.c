#include "lists.h"

/**
 * insert_nodeint_at_index - this is the main function
 * @head: the head
 * @idx: the index of the list where the new node should be added
 * @n: value
 * Description: a function that inserts a new node at a given position
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *update, *new_element, *old_element;
	unsigned int number;

	if (head == NULL)
		return (NULL);
	update = (listint_t *)malloc(sizeof(listint_t));

	if (update == NULL)
		return (NULL);
	update->n = n;

	if (idx == 0)
	{
		update->next = *head;
		*head = update;
	}
	else
	{
		new_element = *head;
		old_element = NULL;
		number = 0;

		while (new_element != NULL && number < idx)
		{
			old_element = new_element;
			new_element = new_element->next;
			number++;
		}
		if (number == idx)
		{
			update->next = new_element;
			old_element->next = update;
		}
		else
		{
			free(update);
			return (NULL);
		}
	}
	return (update);
}
