#include "lists.h"

size_t cc(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * cc - this is a function
 * @head: the head
 * Description: a function that counts the number
 * of unique elements in a linked list
 * Return: result
 */
size_t cc(const listint_t *head)
{
	const listint_t *first, *second;
	size_t third;

	third = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	second = (head->next)->next;

	while (second)
	{
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				third++;
				first = first->next;
				second = second->next;
			}

			first = first->next;
			while (first != second)
			{
				third++;
				first = first->next;
			}

			return (third);
		}

		first = first->next;
		second = (second->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - this is the main function
 * @head: the head
 * Description: a function that prints a linked list
 * Return: it will return the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t third, number;

	third = 0;
	number = 0;

	third = cc(head);

	if (third == 0)
	{
		for (; head != NULL; third++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (number = 0; number < third; number++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (third);
}
