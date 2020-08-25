#include "lists.h"
/**
 * is_palindrome - check if a linked list is a palindrome
 * @head: pointer to the head of the linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
	int pal_list[2048];
	int i = 0, x = 0;

	if (head == NULL || *head == NULL || current->next == NULL)
		return (1);

	for (i = 0; current != NULL; i++)
	{
		pal_list[i] = current->n;
		current = current->next;
	}
	i -= 1;
	for (; x <= i; x++, i--)
	{
		if (pal_list[x] != pal_list[i])
			return (0);
	}
	return (1);
}
