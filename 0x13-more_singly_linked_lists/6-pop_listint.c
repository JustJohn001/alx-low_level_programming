#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the deleted elements,
 * or 0 if the list was empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nbr;

	if (!head || !*head)
		return (0);

	nbr = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (nbr);
}
