#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
	void	*data;
	struct Node *next;
} t_list;

t_list *ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);


#endif