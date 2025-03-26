int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (result = ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_fibonacci(0));
// 	printf("%d\n", ft_fibonacci(5));
// 	printf("%d\n", ft_fibonacci(9));
// 	printf("%d\n", ft_fibonacci(25));
//     return 0;
// }