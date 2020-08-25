#include "lists.h"
/**
 * is_palindrome - check if a linked list is a palindrome
 * @head: pointer to the head of the linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *current;
	int i;

	if (head == NULL || *head == NULL)
		return (1);

	current = *head;

	for (i = 0; current != NULL; i++)
	{
		pal_list[i] = current->n;
		current = current->next;
	}
	i -= 1;
	for (int x = 0; x <= i; x++, i--)
	{
		if (pal_list[x] != pal_list[i])
			return (0);
	}
	return (1);
}
