#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
//#include <stdio.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
} t_list;

int	ft_list_size(t_list *begin_list);

/* void test_list_size();
t_list	*ft_create_elem(void *data); */

#endif