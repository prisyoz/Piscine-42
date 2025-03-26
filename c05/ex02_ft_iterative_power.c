int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power >= 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_iterative_power(4, 5));
//     return 0;
// }