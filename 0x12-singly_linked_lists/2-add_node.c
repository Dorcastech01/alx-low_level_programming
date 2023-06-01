#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - this is the main function
 * @head: pointer
 * @str: another pointer
 * Description: a function that adds a new node
 * at the beginning of a list_t list
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
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
	my_new_node->next = *head;
	*head = my_new_node;

	return (my_new_node);
}
