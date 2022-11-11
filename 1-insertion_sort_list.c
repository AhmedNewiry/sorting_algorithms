#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: list of integer.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *element, *tmp;

	element = *list;
	element = element->next;
	if (!list || !*list || !(*list)->next)
	{
		return;
	}
	while (element)
	{
		while (element->prev != NULL && element->n < element->prev->n)
		{
			tmp = element;
			if (element->next != NULL)
			{
				element->next->prev = tmp->prev;
			}
			element->prev->next = tmp->next;

			element = element->prev;
			tmp->prev = element->prev;
			tmp->next = element;
			if (element->prev != NULL)
			{
				element->prev->next = tmp;
			}
			element->prev = tmp;
			if (tmp->prev == NULL)
			{
				*list = tmp;
			}
			print_list(*list);
			element = element->prev;
		}
		element = element->next;
	}
}
