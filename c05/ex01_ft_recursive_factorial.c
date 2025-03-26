int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
	{
		return (1);
	}
	result = nb * ft_recursive_factorial(nb -1);
	return (result);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("6: %d\n", ft_recursive_factorial(6));
// 	printf("11: %d\n", ft_recursive_factorial(11));
// 	printf("0: %d\n", ft_recursive_factorial(0));
// 	printf("1: %d\n", ft_recursive_factorial(1));
// 	printf("2: %d\n", ft_recursive_factorial(2));
// 	printf("3: %d\n", ft_recursive_factorial(3));
// 	printf("13 overflow: %d\n", ft_recursive_factorial(13));
// 	printf("-5: %d\n", ft_recursive_factorial(-5));
// }