#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
} t_list;

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);


#endif