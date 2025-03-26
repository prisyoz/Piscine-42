#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	count;

	count = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (count < size)
	{
		tab[count] = min + count;
		count++;
	}
	return (tab);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size;

    // Test Case 1: Normal case
    arr = ft_range(3, 8);
    size = 8 - 3;
    printf("Range (3 to 7): ");
    print_array(arr, size);
    free(arr);

    // Test Case 2: Min == Max (Should return NULL)
    arr = ft_range(5, 5);
    printf("Range (5 to 5): ");
    print_array(arr, 0);

    // Test Case 3: Min > Max (Should return NULL)
    arr = ft_range(10, 7);
    printf("Range (10 to 7): ");
    print_array(arr, 0);

    // Test Case 4: Large range
    arr = ft_range(-5, 5);
    size = 5 - (-5);
    printf("Range (-5 to 4): ");
    print_array(arr, size);
    free(arr);

    return 0;
}