#include "lists.h"

/**
 * *add_nodeint - this is the main function
 * @head: the head
 * @n: another arg for the main function
 * Description: a function that adds a new node
 * at the beginning of a linked list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *update;

	update = (listint_t *)malloc(sizeof(listint_t));

	if (update == NULL)
		return (NULL);

	update->n = n;
	update->next = *head;
	*head = update;

	return (update);
}
