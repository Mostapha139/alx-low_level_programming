#include "lists.h"
/**
 * free_list - fres the list
 * @head: a pointer to the first node
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
