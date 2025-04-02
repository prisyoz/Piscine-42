#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list != NULL)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}


/* t_list	*ft_create_elem(void *data)
{
	t_list *new_elem;
	new_elem = malloc(sizeof(t_list));
	if (!new_elem)
		return NULL;
	new_elem->data = data;
	new_elem->next = NULL;
	return new_elem;
}

// Test function
void test_list_size()
{
	// Test case 1: Create a list with 3 nodes
	t_list *head = NULL;
	head = ft_create_elem("Node1");
	head->next = ft_create_elem("Node2");
	head->next->next = ft_create_elem("Node3");

	// Check the size of the list (Expected: 3)
	int size = ft_list_size(head);
	printf("Test 1 - List size: %d (Expected: 3)\n", size);

	// Test case 2: Create an empty list
	t_list *empty_head = NULL;
	// Check the size of the empty list (Expected: 0)
	int empty_size = ft_list_size(empty_head);
	printf("Test 2 - Empty list size: %d (Expected: 0)\n", empty_size);

	// Test case 3: Create a list with 1 node
	t_list *one_node_head = ft_create_elem("OnlyNode");
	// Check the size of the list with one node (Expected: 1)
	int one_node_size = ft_list_size(one_node_head);
	printf("Test 3 - One node list size: %d (Expected: 1)\n", one_node_size);
}

// Main function to run the test
int main()
{
	test_list_size();
	return 0;
} */