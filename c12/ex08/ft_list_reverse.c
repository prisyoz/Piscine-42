#include "ft_list.h"


void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *curr;
	t_list *next;

	curr = *begin_list;
	prev = NULL;

	while (curr != NULL)
	{
		// Store next
		next = curr->next;

		// Reverse current node pointer
		curr->next = prev;

		prev = curr;
		curr = next;
	}
	return prev;
}