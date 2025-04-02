#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>

typedef struct Node
{
	void	*data;
	struct Node	*next;
} t_list;

t_list	*ft_list_last(t_list *begin_list);

#endif