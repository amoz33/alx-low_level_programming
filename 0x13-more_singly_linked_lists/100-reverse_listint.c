#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - it reverses a linked list
 *
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *m;

	p = NULL;
	m = NULL;

	while (*head != NULL)
	{
		m = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = m;
	}

	*head = p;
	return (*head);
}
