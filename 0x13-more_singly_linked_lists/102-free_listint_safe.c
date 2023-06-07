#include "lists.h"


size_t dd(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * dd - this is a function for the code
 * @head: the head
 * Description: a function that counts the number of elements
 * in a linked list
 * Return: it returns the result
 */
size_t dd(listint_t *head)
{
	listint_t *first, *second;
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
 * free_listint_safe - this is the main function
 * @h: an arg for the function
 * Description: a function that frees a linked list
 * Return: it returns the size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *erio;
	size_t third, number;

	third = dd(*h);

	if (third == 0)
	{
		for (; h != NULL && *h != NULL; third++)
		{
			erio = (*h)->next;
			free(*h);
			*h = erio;
		}
	}

	else
	{
		for (number = 0; number < third; number++)
		{
			erio = (*h)->next;
			free(*h);
			*h = erio;
		}

		*h = NULL;
	}

	h = NULL;

	return (third);
}
