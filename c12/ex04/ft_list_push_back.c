#include "ft_list.h"


t_list	*ft_create_elem(void *data)
{
	t_list *new_elem;

	new_elem =malloc(sizeof(t_list));

	if (!new_elem)
		return NULL;

		new_elem->data = data;
		new_elem->next = NULL;

		return (new_elem);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*last_node;

	new_elem = ft_create_elem(data);

	if (*begin_list == NULL)
	{
		*begin_list = new_eleml-;
	}
	else
	{
		last_node = *begin_list;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_elem;
	}
}