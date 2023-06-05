#include "lists.h"

/**
 * add_nodeint_end - this is the main function
 * @head: the head
 * @n: another arg in the main function
 * Decription: a function that adds a new node
 * at the end of a linked list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *update, *new_element;

	update = (listint_t *)malloc(sizeof(listint_t));

	if (update == NULL)
		return (NULL);
	update->n = n;
	update->next = NULL;

	if (*head == NULL)
		*head = update;
	else
	{
		new_element = *head;

		while (new_element->next != NULL)
			new_element = new_element->next;
		new_element->next = update;
	}

	return (update);
}
