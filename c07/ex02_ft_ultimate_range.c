
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	count;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	count = 0;
	while (count < size)
	{
		(*range)[count] = min + count;
		count++;
	}
	return (size);
}

// #include <stdio.h>

// int	main()
// {
// 	int *range;
// 	int	arr;

// 	arr = ft_ultimate_range(&range, -4, 100);
// 	printf("%d", arr);
// 	// free(range);
// 	return (0);
// }