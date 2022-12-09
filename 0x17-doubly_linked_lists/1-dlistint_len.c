#include "lists.h"

/**
 * dlistint_len - asd
 * @h: asd
 * Return: asd
 **/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
