#include "lists.h"

/**
 * reverse_listint - this is the main function
 * @head: the head
 * Description: a function that reverses a linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_element, *new_element;

	old_element = NULL;
	new_element = *head;

	while (new_element != NULL)
	{
		listint_t *next = new_element->next;

		new_element->next = old_element;
		old_element = new_element;

		new_element = next;
	}
	*head = old_element;
	return (*head);
}
