#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - this is the main function
 * @head: a pointer
 * @str: another pointer
 * Description: a function that adds a
 * new node at the end of a list_t list
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *my_new_node;

	if (str == NULL)
		return (NULL);
	my_new_node = (list_t *)malloc(sizeof(list_t));

	if (my_new_node == NULL)
		return (NULL);
	my_new_node->str = strdup(str);

	if (my_new_node->str == NULL)
	{
		free(my_new_node);
		return (NULL);
	}
	my_new_node->len = strlen(str);
	my_new_node->next = NULL;

	if (*head == NULL)
		*head = my_new_node;
	else
	{
		list_t *eri = *head;

		while (eri->next != NULL)
			eri = eri->next;
		eri->next = my_new_node;
	}

	return (my_new_node);
}
