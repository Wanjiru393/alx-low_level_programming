#include "lists.h"

/**
 * insert_dnodeint_at_index - asd
 * @h: asd
 * @idx: asd
 * @n: asd
 * Return: asd
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL, new->next = NULL;
	if (idx == 0)
	{
		if (h == NULL || *h == NULL)
		{
			*h = new;
			return (new);
		}
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (i < idx - 1)
	{
		if (temp->next  == NULL)
			return (NULL);

		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
	{
		temp->next = new;
		new->prev = temp;
		return (new);
	}
	new->next = temp->next;
	temp->next->prev = new;
	new->prev = temp;
	temp->next = new;
	return (new);
}
