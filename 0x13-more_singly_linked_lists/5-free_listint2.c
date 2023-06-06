#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

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
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;
	new_element = *head;
	next = NULL;

	while (new_element != NULL)
	{
		next = new_element->next;
		free(new_element);
		new_element = next;
	}
	*head = NULL;
}
