#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly-linked list of integers in ascending
 *                       order using the Insertion Sort algorithm.
 *
 * @list: Double pointer to the head of the linked list.
 *
 * Description: This function implements the Insertion Sort algorithm on a
 *              doubly-linked list. It sorts the elements in ascending order.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node = (*list)->next;
	listint_t *prin;
	listint_t *tmp;
	listint_t *swap;

	while (current_node)

		if (list == NULL || *list == NULL)
			return;
	{
		swap = current_node;

		while (swap->prev && swap->n < swap->prev->n)
		{
			tmp = swap->prev;

			swap->prev = tmp->prev;
			tmp->next = swap->next;
			if (swap->prev)
				swap->prev->next = swap;
			tmp->prev = swap;
			swap->next = tmp;
			if (tmp->next)
				tmp->next->prev = tmp;
			if (!swap->prev)
				*list = swap;
			swap = tmp->prev;
		}
		prin = *list;

		while (prin)
		{
			if (prin->prev || !prin->next)
				printf(", ");
			printf("%d", prin->n);
			prin = prin->next;
		}
		printf("\n");
		current_node = current_node->next;
	}
}
