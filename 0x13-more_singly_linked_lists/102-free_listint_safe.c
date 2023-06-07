#include "lists.h"

/**
 * free_listint_safe - this is the main function
 * @h: the arg for the function
 * Description: a function that frees a linked list
 * Return: it returns the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t number;
	listint_t *new_element;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (0);

	number = 0;
	new_element = *h;
	next = NULL;

	while (new_element != NULL)
	{
		next = new_element->next;
		free(new_element);
		new_element = next;
		number++;

		if (new_element == *h)
		{
			*h = NULL;
			return (number);
		}
	}
	return (number);
}
