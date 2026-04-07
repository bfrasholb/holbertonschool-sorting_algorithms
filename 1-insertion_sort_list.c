#include "sort.h"

/**
 * swap_nodes- swaps two nodes
 * @list: the list containing the nodes
 * @left: left node to swap
 * @right: right node to swap
 */

void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	if (!left || !right || left->next != right)
		return;

	if (left->prev)
		left->prev->next = right;
	else
		*list = right;

	right->prev = left->prev;

	if (right->next)
		right->next->prev = left;

	left->next = right->next;
	right->next = left;
	left->prev = right;
}

/**
 * insertion_sort_list- insertion sorts a list
 * @list: pointer to the array to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *insert, *current;

	if (!*list || !list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		insert = current;
		current = current->next;
		while (insert->prev && insert->n < insert->prev->n)
		{
			swap_nodes(list, insert->prev, insert);
			print_list(*list);
		}
	}
}
