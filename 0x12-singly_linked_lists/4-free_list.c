#include "lists.h"
/**
 * free_list - free single list link
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}
