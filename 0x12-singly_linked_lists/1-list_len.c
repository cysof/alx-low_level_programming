#include "lists.h"
/**
 * list_en = returns the num of elements in linked list
 * @h: head of a linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
