#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - this is the main function
 * @head: a pointer
 * Description: a function that frees a list_t list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *eri, *next;

	eri = head;

	while (eri)
	{
		next = eri->next;
		free(eri->str);
		free(eri);
		eri = next;
	}
}
