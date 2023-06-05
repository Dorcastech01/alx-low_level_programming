#include "lists.h"

/**
 * free_listint - this is the main function
 * @head: the head
 * Description: a function that frees a linked list
 * Return: the result
 */

void free_listint(listint_t *head)
{
	listint_t *new_element;

	while (head != NULL)
	{
		new_element = head;
		head =  head->next;
		free(new_element);
	}
}
