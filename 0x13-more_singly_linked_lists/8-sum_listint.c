#include "lists.h"

/**
 * sum-listint - calculte the sum of all the data in a listint-t list
 * @head: first node in the linked list
 *
 * Return: reuslting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum)
}
