
int	check_doubles(int map[4][4], int pos)
{
	int	count;
	int	nbr;

	count = 0;
	nbr = map[pos / 4][pos % 4];
	while (count < 4)
	{
		if (count != (pos % 4) && map[pos / 4][count] == nbr)
			return (1);
		if (count != (pos / 4) && map[count][pos % 4] == nbr)
			return (1);
		count++;
	}
	return (0);
}

int	col_up(int map[4][4], int pos, int entry[16])
{
	int	row;
	int	tower;
	int	count;

	row = 0;
	tower = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (row < 4)
		{
			if (map[row][pos % 4] > tower)
			{
				tower = map[row][pos % 4];
				count++;
			}
			row++;
		}
		if (entry[pos % 4] != count)
			return (1);
	}
	return (0);
}

int	col_down(int map[4][4], int pos, int entry[16])
{
	int	row;
	int	tower;
	int	count;

	row = 3;
	tower = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (row >= 0)
		{
			if (map[row][pos % 4] > tower)
			{
				tower = map[row][pos % 4];
				count++;
			}
			row--;
		}
		if (entry[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	row_left(int map[4][4], int pos, int entry[16])
{
	int	col;
	int	tower;
	int	count;

	col = 0;
	tower = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (col <= 3)
		{
			if (map[pos / 4][col] > tower)
			{
				tower = map[pos / 4][col];
				count++;
			}
			col++;
		}
		if (entry[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	row_right(int map[4][4], int pos, int entry[16])
{
	int	col;
	int	tower;
	int	count;

	col = 3;
	tower = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (col >= 0)
		{
			if (map[pos / 4][col] > tower)
			{
				tower = map[pos / 4][col];
				count++;
			}
			col--;
		}
		if (entry[12 + pos / 4] != count)
			return (1);
	}
	return (0);
}
