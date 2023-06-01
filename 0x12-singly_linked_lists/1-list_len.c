#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - this is the main function
 * @h: pointer
 * Description: a function that returns the number
 * of elements in a linked list_t list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t eri = 0;

	while (h)
	{
		eri++;
		h = h->next;
	}
	return (eri);
}
