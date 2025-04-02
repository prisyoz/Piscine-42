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
//void print_node(t_list *node);

#endif