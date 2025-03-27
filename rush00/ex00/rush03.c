
#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int x, int y, int x_coord, int y_coord)
{
	if ((x == 1 && y == 1) || (x_coord == 0 && y_coord == 0))
		ft_putchar('A');
	else if (x == 1 && y_coord == y - 1)
		ft_putchar('A');
	else if ((y == 1 && x_coord == x - 1)
		|| (x_coord == x - 1 && y_coord == y - 1)
		|| (x_coord == x - 1 && y_coord == 0))
		ft_putchar('C');
	else if (x_coord == 0 && y_coord == 0)
		ft_putchar('A');
	else if ((x_coord == 0 && y_coord == y - 1))
		ft_putchar('A');
	else if (y_coord == 0 || y_coord == y - 1
		|| x_coord == 0 || x_coord == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	x_coord;
	int	y_coord;

	x_coord = 0;
	y_coord = 0;
	if (!(x < 1 && y < 1))
	{
		while (y_coord < y)
		{
			while (x_coord < x)
			{
				print_char(x, y, x_coord, y_coord);
				++x_coord;
			}
			ft_putchar('\n');
			x_coord = 0;
			++y_coord;
		}
	}
}
