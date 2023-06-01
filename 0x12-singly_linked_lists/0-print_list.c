#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - this is the main function
 * @h: pointer
 * Description: a function that prints
 * all the elements of a list_t list
 * Return: the number of nodes or
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t eri = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		eri++;
	}
	return (eri);
}
