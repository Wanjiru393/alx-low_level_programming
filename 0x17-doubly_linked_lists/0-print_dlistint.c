#include "lists.h"

/**
 * print_dlistint - asd
 * @h: asd
 * Return: asd
 **/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
