
#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strcpy(char *str, int size)
{
	char	*dest;
	int		count;

	dest = malloc((size +1) * sizeof(char));
	if (!dest)
		return (NULL);
	count = 0;
	while (str[count] != '\0')
	{
		dest[count] = str[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_free(t_stock_str *arr, int count)
{
	while (count >= 0)
	{
		free(arr[count].copy);
		count--;
	}
	free(arr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			count;

	if (ac <= 0)
		return (NULL);
	arr = malloc(sizeof(t_stock_str) * (ac +1));
	if (!arr)
		return (NULL);
	count = 0;
	while (count < ac)
	{
		arr[count].size = ft_strlen(av[count]);
		arr[count].str = av[count];
		arr[count].copy = ft_strcpy(av[count], arr[count].size);
		if (!arr[count].copy)
		{
			ft_free(arr, count -1);
			return (NULL);
		}
		count++;
	}
	arr[count].size = 0;
	arr[count].str = NULL;
	arr[count].copy = NULL;
	return (arr);
}
