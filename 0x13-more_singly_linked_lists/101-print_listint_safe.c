#include "lists.h"

/**
 * print_listint_safe - this is the main function
 * @head: the head
 * Description: a function that prints a linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *first, *second;
	size_t number;

	first = head;
	second = head;
	number = 0;

	while (first != NULL && second != NULL && first->next != NULL)
	{
		printf("[%p] %d\n", (void *)first, first->n);
		number++;
		first = first->next;

		second = second->next->next;

		if (first == second)
		{
			printf("[%p] %d\n", (void *)first, first->n);
			number++;
			break;
		}
	}
	return (number);
}
