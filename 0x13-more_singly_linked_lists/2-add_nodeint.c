#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node at the beginning
 * @head: A pointer
 * @n: The integer
 *
 * Return: NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
