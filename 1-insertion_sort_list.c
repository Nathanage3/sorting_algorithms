#include "sort.h"
/**
 * insertion_sort_list - insertion sorting
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *next_node, *prev_node;

	if (!list || !(*list) || !(*list)->next)
		return;

	curr = (*list)->next;
	while (curr)
	{
		prev_node = curr->prev;
		prev_node->next = curr->next;
		while (curr->prev && curr->n < curr->prev->n)
		{
			prev_node = curr->prev;
			prev_node->next = curr->next;
			if (curr->next)
				curr->next->prev = prev_node;
			curr->next = prev_node;
			curr->prev = prev_node->prev;
			if (prev_node->prev)
				prev_node->prev->next = curr;
			else
				*list = curr;
			prev_node->prev = curr;
			print_list(*list);
		}
		curr = next_node;
	}
}
