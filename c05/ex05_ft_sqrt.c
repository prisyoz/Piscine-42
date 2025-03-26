int	ft_sqrt(int nb)
{
	int	num;

	num = 2;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	if (num >= 2)
	{
		while (num * num <= nb)
		{
			if (num * num == nb)
				return (num);
			num++;
		}
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_sqrt(1));
//     return 0;
// }