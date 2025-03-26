
int	ft_is_prime(int nb)
{
	int	prime;

	prime = 3;
	if (nb < 2)
		return (0);
	if (nb > 1)
		if (nb % 2 == 0)
			return (0);
	while (prime * prime <= nb)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("int - 0: %d\n", ft_find_next_prime(0));
// 	printf("int - 1: %d\n", ft_find_next_prime(1));
// 	printf("int - 2: %d\n", ft_find_next_prime(2));
// 	printf("int - 3: %d\n", ft_find_next_prime(3));
// 	printf("int - 4: %d\n", ft_find_next_prime(4));
// 	printf("int - 8: %d\n", ft_find_next_prime(8));
// 	printf("int - 159: %d\n", ft_find_next_prime(159));
// 	printf("int - 7564: %d\n", ft_find_next_prime(7564));
// }
