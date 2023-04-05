#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 *
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dogg = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (dogg && fast && fast->next)
	{
		fast = fast->next->next;
		dogg = dogg->next;
		if (fast == dogg)
		{
			dogg = head;
			while (dogg != fast)
			{
				dogg = dogg->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
