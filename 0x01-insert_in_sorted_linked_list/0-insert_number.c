#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert node in a sorted list
 * @head: pointer to head of list
 * @number: value to insert
 * Return: number of the nodes
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *temp, *current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = number;
	new->next = NULL;
	if (head && (*head)->n < number)
	{
		while (current->next != NULL)
		{
			if (current->next->n >= number && current->n < number)
			{
				temp = current;
				new->next = temp->next;
				current->next = new;
			}
			current = current->next;
		}
	}
	return (new);
}
