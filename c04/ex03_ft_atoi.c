
int	ft_atoi(char	*str)
{
	int	count;
	int	sign;
	int	nbr;

	count = 0;
	sign = 1;
	nbr = 0;
	while (str[count] == 32 || (str[count] >= 9 && str[count] <= 13))
	{
		count++;
	}
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		nbr = (nbr * 10) + (str[count] - '0');
		count++;
	}
	return (nbr * sign);
}

/* #include <stdio.h>

int	main()
{
	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
	printf("%d\n", ft_atoi("+-42"));
	printf("%d\n", ft_atoi("  --00123abc"));
	printf("%d\n", ft_atoi("   987"));
	printf("%d\n", ft_atoi("abc123"));
}
 */