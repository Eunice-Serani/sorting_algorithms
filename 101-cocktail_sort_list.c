#include "sort.h"
#include <stdio.h>

/**
 * swap_node - Swaps a node for its previous one
 * @cur_node: current node to be swapped
 * @list: pointer to doubly linked list
 * Return: return a pointer to a node which was to enter it
 */
listint_t *swap_node(listint_t *cur_node, listint_t **list)
{
	listint_t *back = cur_node->prev, *current = cur_node;

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
	*list = current;
	return (current);
}

/**
 * cocktail_sort_list - This is a cocktail sort implementation
 * working on a double linked lists
 * @list: pointer to doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *node;
	int swap_done = 1;

	if (*list == NULL || (*list)->next == NULL)
		return;

	cur_node = *list;
	while (swap_done == 1)
	{
		swap_done = 0;

		while (cur_node->next)
		{
			if (cur_node->n > cur_node->next->n)
			{
				cur_node = swap_node(cur_node->next, list);
				swap_done = 1;
				print_list(*list);
			}
			else
				cur_node = node->next;
		}
		if (swap_done == 0)
			break;
		swap_done = 0;
		while (cur_node->prev)
		{
			if (cur_node->n < cur_node->prev->n)
			{
				cur_node = swap_node(cur_node, list);
				swap_done = 1;
				print_list(*list);
			}
			else
				cur_node = cur_node->prev;
		}
	}
}
