#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
} t_list;

t_list *ft_create_elem(void *data);
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);


#endif