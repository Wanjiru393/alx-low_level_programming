#include "lists.h"

/**
 * sum_dlistint - asd
 * @head: asd
 * Return: asd
 **/
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
