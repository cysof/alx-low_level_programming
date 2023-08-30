#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)

       	const listint_t *slow, *fast;
	size_t count = 0;
	
	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
        	slow = slow->next;
        	fast = fast->next->next;

        /* If slow and fast meet, there is a loop */
        	if (slow == fast)
        	{
           		 printf("-> [%p] %d\n", (void *)slow, slow->n);
            		exit(98);
        	}

        		printf("[%p] %d\n", (void *)slow, slow->n);
        		count++;
    		}

    /* Print the remaining nodes after loop check */
    	while (slow)
    	{
        	printf("[%p] %d\n", (void *)slow, slow->n);
     	   	slow = slow->next;
        	count++;
    	}

    	return (count);
}
