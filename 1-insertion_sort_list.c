#include "sort.h"

/**
 * insertion_sort_list - sorts a doub linked list ascend
 * @list: double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *node;

	if (!list|| !(*list))
	{
		return;
	}
	aux = (*list)->next;
	while (aux)
	{
		node = aux->next;
		while (aux->prev && aux->n < aux->prev->n)
		{
			aux->prev->next = aux->next;
			if (aux->next)
			{
				aux->next->prev = aux->prev;
			}
			aux->next = aux->prev;
			aux->prev = aux->next->prev;
			aux->next->prev = aux;
			if (!(aux->prev))
			{
				*list = aux;
			}
			else
			{
				aux->prev->next = aux;
			}
			print_list(*list);
		}
		aux = node;
	}
}
