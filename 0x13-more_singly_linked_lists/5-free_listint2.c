#include "lists.h"

/**
 * free_listint2 - this is the main function
 * @head: this is the head
 * Description: a function that frees a linked list and
 * sets the head to NULL
 * Return: the result
 */

void free_listint2(listint_t **head)
{
	listint_t *new_element;

	while (*head != NULL)
	{
		new_element = *head;
		*head = (*head)->next;
		free(new_element);
	}

	if (*head == NULL)
		return;
}
