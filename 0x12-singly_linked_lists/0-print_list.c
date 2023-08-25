#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", count, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
