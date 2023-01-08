#include "lists.h"

/**
 * add_dnodeint - asd
 * @head: asd
 * @n: asd
 * Return: asd
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head != NULL)
		(*head)->prev = new;

	new->n = n;
	new->next = *head;
	*head = new;
	new->prev = NULL;

	return (new);
}
