
#include <stdlib.h>
#include "functions.h"

int	*allocate_map(void)
{
	int	*grid;
	int	count;

	count = 0;
	grid = malloc(sizeof(int) * 16);
	if (grid == NULL)
	{
		ft_putstr("Error\n");
		return (NULL);
	}
	count = 0;
	while (count < 16)
	{
		grid[count] = 0;
		count++;
	}
	return (grid);
}

int	check(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	return (0);
}

int	*get_numbers(char	*str)
{
	int	count;
	int	pos;
	int	*tab;

	count = 0;
	pos = 0;
	tab = allocate_map();
	if (str[0] >= '1' && str[0] <= '4')
		tab[pos++] = str[count] - '0';
	while (str[count] != '\0' && pos < 16)
	{
		if (str[count] >= '1' && str[count] <= '4' && str[count -1] == ' ')
			tab[pos++] = str[count] - '0';
		count++;
	}
	if (pos != 16)
	{
		ft_putstr("Error\n");
		free(tab);
		return (NULL);
	}
	return (tab);
}
