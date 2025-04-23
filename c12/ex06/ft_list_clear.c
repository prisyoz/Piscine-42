#include "ft_list.h"


void	free_fct(void *data)
{
    free(data);
}


void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list *ptr = begin_list;
    while (ptr != NULL)
    {
        t_list *next = ptr->next;
        free_fct(ptr->data);
        ptr = next;
    }
}

/* #include <stdio.h>

int main(void)
{
    // Assuming a simple list of strings for illustration
    t_list *node1 = malloc(sizeof(t_list));
    node1->data = malloc(10);  // Some allocated data
    node1->next = NULL;
    
    t_list *node2 = malloc(sizeof(t_list));
    node2->data = malloc(20);  // Some allocated data
    node2->next = node1;

    // Clear the list, using free_fct to free the data
    ft_list_clear(node2, free_fct);

    return 0;
}
 */