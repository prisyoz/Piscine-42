int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
	{
		return (1);
	}
	else
		result = nb * ft_recursive_power(nb, power -1);
	return (result);
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_recursive_power(8, 7
// ));
//     return 0;
// }
