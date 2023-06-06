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
	listint_t **d;

	d = head;

	if (d != NULL)
	{
		while (*head != NULL)
		{
			new_element = *head;
			free(new_element);
			*head = (*head)->next;
		}
		*d = NULL;
	}
}
