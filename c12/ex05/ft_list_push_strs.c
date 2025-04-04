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
	t_list *head;
	t_list *new_elem;
	int	count;

	head = NULL;
	count = size -1;
	while (count < size)
	{
		new_elem = ft_create_elem(strs[count]);
		if (!new_elem)
			return (NULL);
		new_elem->next = head;
		head = new_elem;
		count--;
	}	
	return (head);
}

#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void print_list(t_list *head)
{
    while (head)
    {
        ft_putstr((char *)head->data);
        write(1, "\n", 1);
        head = head->next;
    }
}

int main(void)
{
    char *strs[] = {"apple", "banana", "cherry"};
    t_list *list = ft_list_push_strs(3, strs);

    print_list(list);
    return 0;
}
