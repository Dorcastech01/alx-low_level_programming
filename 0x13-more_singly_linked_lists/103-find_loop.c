#include "lists.h"

/**
 * find_listint_loop - this is the main function
 * @head: this is the head
 * Description: a function that finds the loop in a linked list
 * Return: it returns the address of the node where the
 * loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	first = head;
	second = head;

	if (head == NULL || head->next == NULL)
		return (NULL);
	while (second != NULL && second->next != NULL)
	{
		first = first->next;
		second = second->next->next;

		if (first == second)
		{
			first = head;

			while (first != second)
			{
				first = first->next;
				second = second->next;
			}
			return (first);
		}
	}
	return (NULL);
}
