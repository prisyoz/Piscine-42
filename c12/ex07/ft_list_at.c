#include "ft_list.h"


// returns Nth element, knowing that first element of list is nbr = 0
t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    int count;

    count = 0;

    while (begin_list && count < nbr)
    {
        begin_list = begin_list=>next;
    }
    return (begin_list);
}