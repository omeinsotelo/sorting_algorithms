#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: double poiter to list.
 * Return: none.
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *crn = NULL;
	listint_t *first = NULL, *second = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	crn = *list;

	while (crn != NULL)
	{
		tmp = crn->next;

		while (crn->prev != NULL && crn->n < crn->prev->n)
		{
			first = crn->prev;
			second = crn;

			first->next = second->next;
			if (first->prev != NULL)
				first->prev->next = second;
			second->prev = first->prev;
			first->prev = second;
			if (second->next != NULL)
				second->next->prev = first;
			second->next = first;
			if (second->prev == NULL)
				(*list) = second;
			print_list(*list);
		}
		crn = tmp;
	}
}
