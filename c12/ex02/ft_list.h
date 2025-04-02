#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
//#include <stdio.h>

typedef struct Node
{
	void	*data;
	struct Node	*next;
} t_list;

int	ft_list_size(t_list *begin_list);

/* void test_list_size();
t_list	*ft_create_elem(void *data); */

#endif