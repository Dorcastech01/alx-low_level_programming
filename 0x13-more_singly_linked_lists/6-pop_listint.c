#include "lists.h"

/**
 * pop_listint - this is the main function
 * @head: the head
 * Description: a function that deletes the head node of a linked list
 * and returns the head node’s data
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int h_n_data;
	listint_t *new_element;

	if (*head == NULL)
		return (0);
	h_n_data = (*head)->n;
	new_element = *head;
	*head = (*head)->next;

	free(new_element);
	return (h_n_data);
}
