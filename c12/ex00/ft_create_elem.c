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


/* // A helper function to print the node (assuming the data is an integer)
void print_node(t_list *node)
{
    if (node != NULL)
    {
        printf("Data: %d\n", *(int *)node->data);
        printf("Next: %p\n", node->next);  // Should print NULL (0x0)
    }
    else
    {
        printf("Node is NULL\n");
    }
}

int main()
{
    // Test with some sample data
    int value = 42;

    // Create a new node
    t_list *node = ft_create_elem(&value);

    // Print the node to verify
    print_node(node);

    // Test case where malloc fails (not normally part of normal testing, but let's simulate it)
    t_list *failed_node = ft_create_elem(NULL); // It would usually just fail silently if malloc fails
    if (failed_node == NULL)
    {
        printf("Memory allocation failed for failed_node.\n");
    }

    // Clean up
    free(node);

	return (0);
} */