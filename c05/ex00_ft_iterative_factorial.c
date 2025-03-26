int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("6: %d\n", ft_iterative_factorial(6));
// 	printf("11: %d\n", ft_iterative_factorial(11));
// 	printf("0: %d\n", ft_iterative_factorial(0));
// 	printf("1: %d\n", ft_iterative_factorial(1));
// 	printf("2: %d\n", ft_iterative_factorial(2));
// 	printf("3: %d\n", ft_iterative_factorial(3));
// 	printf("13 overflow: %d\n", ft_iterative_factorial(13));
// 	printf("-5: %d\n", ft_iterative_factorial(-5));
// }