
#include <unistd.h>
#include "functions.h"
#include <stdlib.h>

int	check_cond(int map[4][4], int pos, int entry[16])
{
	if (check_doubles(map, pos) == 1)
		return (1);
	if (col_up(map, pos, entry) == 1)
		return (1);
	if (col_down(map, pos, entry) == 1)
		return (1);
	if (row_left(map, pos, entry) == 1)
		return (1);
	if (row_right(map, pos, entry) == 1)
		return (1);
	return (0);
}

int	solve(int map[4][4], int entry[16], int pos)
{
	int	height;

	if (pos == 16)
		return (1);
	height = 1;
	while (height <= 4)
	{
		map[pos / 4][pos % 4] = height;
		if (check_cond(map, pos, entry) == 0)
		{
			if (solve(map, entry, pos + 1) == 1)
				return (1);
		}
		map[pos / 4][pos % 4] = 0;
		height++;
	}
	return (0);
}

void	print_map(int map[4][4])
{
	int	x_coord;
	int	y_coord;

	x_coord = 0;
	while (x_coord < 4)
	{
		y_coord = 0;
		while (y_coord < 4)
		{
			ft_putnbr(map[x_coord][y_coord]);
			if (!(y_coord % 4 == 3))
			{
				ft_putchar(' ');
			}
			y_coord++;
		}
		ft_putchar('\n');
		x_coord++;
	}
}

void	init_map(int map[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			map[row][column] = 0;
			column++;
		}
		row++;
	}
}

int	main(int argc, char **argv)
{
	int	map[4][4];
	int	*entry;

	init_map(map);
	if (argc < 2 || check(argc, argv) == 1)
	{
		ft_putstr("Error\n");
		return (1);
	}
	entry = get_numbers(argv[1]);
	if (!entry)
		return (1);
	if (solve(map, entry, 0) == 1)
		print_map(map);
	else
		ft_putstr("Error\n");
	free(entry);
	return (0);
}
