#include "lists.h"

/**
 * print_listint_safe - this is the main function
 * @head: the head
 * Description: a function that prints a linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *first = head;
	const listint_t *second = head;
	size_t number = 0;

	while (first && second && second->next)
	{
		printf("[%p] %d\n", (void *)first, first->n);
		number++;
		first = first->next;
		second = second->next->next;

		if (first == second)
		{
			printf("-> [%p] %d\n", (void *)first, first->n);
			exit(98);
		}
	}

	if (first != second)
	{
		printf("[%p] %d\n", (void *)first, first->n);
		number++;
	}
	return (number);
}

/**	
 * {
	long int first;
	size_t second;

	second = 0;

	while (head)
	{
		first = head - head->next;
		second++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (first > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
			exit(98);
		}
	}
	return (second);
}
*/
