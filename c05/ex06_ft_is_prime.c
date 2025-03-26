
int	ft_is_prime(int nb)
{
	int	prime;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb > 1)
		if (nb % 2 == 0)
			return (0);
	prime = 3;
	while (prime * prime <= nb)
	{
		if (nb % prime == 0)
			return (0);
		prime += 2;
	}
	return (1);
}

/* #include <stdio.h>

int main()
{
	printf("0: %d\n", ft_is_prime(0));
	printf("0: %d\n", ft_is_prime(1));
	printf("1: %d\n", ft_is_prime(2));
	printf("1: %d\n", ft_is_prime(5));
	printf("1: %d\n", ft_is_prime(29));
	printf("0: %d\n", ft_is_prime(30));
	printf("0: %d\n", ft_is_prime(354));
	printf("1: %d\n", ft_is_prime(7573));
} */