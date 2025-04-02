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

t_list	*ft_list_push_strs(int size, char **strs)
{
	
}